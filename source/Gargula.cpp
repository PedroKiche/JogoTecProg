#include "Gargula.hpp"
#include "Mago.hpp"
Gargula::Gargula()
{
}

Gargula::Gargula(const Vetor2F pos, Mago* mg, Mago* mg2): Inimigo(Ids::gargula, pos, Vetor2F(90.0f, 100.0f), 100.0, 150.0, mg, mg2, "../JogoTecProg/texture/gargula.png")
{
}

Gargula::~Gargula()
{
}

void Gargula::atacar(const float t)
{
    float distanciaY = posicao.y - mago1->getPosicao().y;
    float distanciaX = posicao.x - mago1->getPosicao().x;
    if (abs(distanciaX) < alcance && distanciaY > -alcance && distanciaY < 0)
    {
        if ((posicao.y - posicaoInicial.y) < alcance){
            posicao.y += t * velocidade;
        }
    }
    else if(mago2)
    {
        distanciaY = posicao.y - mago2->getPosicao().y;
        distanciaX = posicao.x - mago2->getPosicao().x;
         if (abs(distanciaX) < alcance && distanciaY > -alcance && distanciaY < 0)
        {
        if ((posicao.y - posicaoInicial.y) < alcance){
            posicao.y += t * velocidade;
        }
    }
    }
} 

void Gargula::colidir(const Ids::Id id, const Vetor2F pos, const Vetor2F tam)
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
                }
                else
                {
                    posicao.y -= interY;
                }
            }
        }
    }
    if (id == Ids::supernova)
        vivo = false;
}

void Gargula::atualizar(const float t)
{
    movimentar(t);
    atacar(t);
}

void Gargula::movimentar(const float t)
{
    if (frente)
    {
        if (posicao.x < posicaoInicial.x + alcance)
        {
            posicao.x += t * velocidade;
        }
        else
        {
            frente = false;
        }
    }
    else
    {
        if (posicao.x  > posicaoInicial.x - alcance)
        {
            posicao.x -= t * velocidade;
        }
        else
        {
            frente = true;
        }
    }
}