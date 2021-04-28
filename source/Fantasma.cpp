#include "Fantasma.hpp"

Fantasma::Fantasma() : Inimigo()
{
    frente = false;
}

Fantasma::Fantasma(const Vetor2F pos, Mago* mg): Inimigo(Ids::fantasma, pos, Vetor2F(50.0f, 50.0f), 200.0, 100.0, mg,  "../JogoTecProg/texture/fantasma.png")
{
    frente = true;
}

Fantasma::~Fantasma()
{
}

void Fantasma::atacar()
{
    //Implementar 
} 

void Fantasma::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
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
}

void Fantasma::atualizar(float t)
{
    movimentar(t);
    posicao.y += t * 100;
    
}

void Fantasma::movimentar(float t)
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