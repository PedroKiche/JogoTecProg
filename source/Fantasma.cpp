#include "Fantasma.hpp"

Fantasma::Fantasma() : Inimigo()
{
    frente = false;
    atacando = false;
    velQueda = 0;
}

Fantasma::Fantasma(const Vetor2F pos, Mago* mg): Inimigo(Ids::fantasma, pos, Vetor2F(50.0f, 50.0f), 130.0, 100.0, mg,  "../JogoTecProg/texture/fantasma.png")
{
    frente = true;
    velQueda = 0;
    atacando = false;
}

Fantasma::~Fantasma()
{
}

void Fantasma::atacar(float t)
{
    float distancia = posicao.x - mago->getPosicao().x;
    if(abs(distancia) < alcance)
    {
        atacando=true;
        velocidade = 150.0f;
        if(distancia > 0)
            posicao.x -= t * velocidade;
        else
            posicao.x += t * velocidade;
    }
    else
    {
        velocidade = 100.0f;
        atacando=false;
    }
} 

void Fantasma::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    if (id == Ids::plataforma || id == Ids::fantasma)
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
                    velQueda = 0;
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
    if(atacando == false)
    movimentar(t);

    atacar(t);
    velQueda += 1000.0f * t;
    posicao.y += velQueda * t;
    
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