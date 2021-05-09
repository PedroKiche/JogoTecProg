#include "Aparicao.hpp"
#include "Fase.hpp"

Aparicao::Aparicao():Inimigo()
{
    descendo = false;
    fase = NULL;
    buraconegro = NULL;
    podeAtacar = false;
}

Aparicao::Aparicao(const Vetor2F pos, Mago* mg, Fase* fs, Mago* mg2): Inimigo(Ids::aparicao, pos, Vetor2F(65.0f, 100.0f), 80.0, 100.0, mg, mg2, "../JogoTecProg/texture/aparicao.png")
{
    descendo = false;
    fase = fs;
    buraconegro = NULL;
    podeAtacar = true;
}

Aparicao::~Aparicao()
{
    if(buraconegro!=NULL)
    {
        fase->remover(buraconegro);
        delete buraconegro;
    }
}

void Aparicao::atacar(const float t)
{
    
    float ataque = abs(posicao.x - mago1->getPosicao().x);
    if(ataque<  400.0 && ataque > 200.0)
    {
        if(posicao.x >  mago1->getPosicao().x)
            frente = false;
        else 
            frente = true;
        atirar(mago1);
    }
    else if (mago2)
    {

        ataque = abs(posicao.x - mago2->getPosicao().x);
        
        if(ataque<  400.0 && ataque > 200.0)
        {
            if(posicao.x >  mago2->getPosicao().x)
                frente = false;
            else 
                frente = true;
            atirar(mago2);
        }
    }


    if(!podeAtacar)
    {
        if(!buraconegro->getAtivo())
        {
        fase->remover(buraconegro);
        delete buraconegro;
        buraconegro = NULL;
        podeAtacar = true;
        }
    }
} 

void Aparicao::colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam)
{
    if (id == Ids::plataforma)
    {
        float deltaX = pos.x - posicao.x;
        float deltaY = pos.y - posicao.y;
        float interX = abs(deltaX) - (tam.x / 2 + tamanho.x / 2);
        float interY = abs(deltaY) - (tam.y / 2 + tamanho.y / 2);

        if (interX < 0.0f && interY < 0.0f)
        {
            if (interX > interY)
            {
                if (deltaX > 0.0f)
                {
                    posicao.x += interX;
                }
                else
                {
                    posicao.x -= interX;
                }
            }
            else
            {
                if (deltaY > 0.0f)
                {
                    posicao.y += interY;
                    if (descendo){
                        descendo = false;
                    }
                    else{
                        descendo = true;
                    }
                }
                else
                {
                    posicao.y -= interY;
                    if (descendo){
                        descendo = false;
                    }
                    else{
                        descendo = true;
                    }
                }
            }
        }
    }
    if (id == Ids::supernova)
    {
        vivo = false;
    }
}

void Aparicao::atualizar(const float t)
{       
    atacar(t);
    movimentar(t);
}

void Aparicao::movimentar(const float t)
{
    if (descendo)
    {
        if (posicao.y < posicaoInicial.y + alcance)
        {
            posicao.y += t * velocidade;
        }
        else
        {
            descendo = false;
        }
    }
    else
    {
        if (posicao.y  > posicaoInicial.y - alcance)
        {
            posicao.y -= t * velocidade;
        }
        else
        {
            descendo = true;
        }
    }
}

void Aparicao::atirar(Mago* mago)
{
     if(podeAtacar)
    {
        buraconegro = new BuracoNegro(posicao, mago->getPosicao(),frente , true, 100.0f);
        fase->adicionar(buraconegro);
        fase->inicializa(buraconegro);
        podeAtacar = false;
    }
}

