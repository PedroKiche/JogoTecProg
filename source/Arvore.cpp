#include "Arvore.h"

Arvore ::Arvore () : Obstaculo()
{
    frente = false;
    velQueda = 0;
    velocidade = 0;
}

Arvore ::Arvore (const Vetor2F pos) : Obstaculo(Ids::arvore, pos, Vetor2F(60.0f, 65.0f), "../JogoTecProg/texture/arvore.png"),
posicaoInicial(pos)
{
    frente = true;
    velQueda = 0;
    velocidade = 50;
}

Arvore ::~Arvore ()
{
}

void Arvore::atualizar(const float t)
{   
    
    movimentar(t);
    velQueda += 1000.0f * t;
    posicao.y += velQueda * t;
    
}

void Arvore::movimentar(const float t)
{
    if (frente)
    {
        if (posicao.x < posicaoInicial.x + 50)
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
        if (posicao.x  > posicaoInicial.x - 50)
        {
            posicao.x -= t * velocidade;
        }
        else
        {
            frente = true;
        }
    }
}


void Arvore::colidir(const Ids::Id id, const Vetor2F pos, const Vetor2F tam)
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