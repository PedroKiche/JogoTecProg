#include "Aparicao.hpp"
#include "Fase.hpp"

Aparicao::Aparicao():Inimigo()
{
    descendo = false;
    fase = NULL;
    buraconegro = NULL;
    podeAtacar = false;
    frente = false;
}

Aparicao::Aparicao(const Vetor2F pos, Mago* mg, Fase* fs): Inimigo(Ids::aparicao, pos, Vetor2F(65.0f, 100.0f), 80.0, 100.0, mg, "../JogoTecProg/texture/aparicao.png")
{
    descendo = false;
    fase = fs;
    buraconegro = NULL;
    frente = false;
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

void Aparicao::atacar(float t)
{
    if(podeAtacar)
    {
        buraconegro = new BuracoNegro(posicao, mago->getPosicao(),frente , true, 100.0f);
        fase->adicionar(buraconegro);
        fase->inicializa(buraconegro);
        podeAtacar = false;
    }
} 

void Aparicao::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
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

void Aparicao::atualizar(float t)
{   
    if(posicao.x >  mago->getPosicao().x)
        frente = false;
    else 
        frente = true;
    
    float ataque = abs(posicao.x - mago->getPosicao().x);
    if(ataque<  400.0 && ataque > 200.0)
        atacar(t);
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
    movimentar(t);
}

void Aparicao::movimentar(float t)
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