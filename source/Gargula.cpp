#include "Gargula.hpp"
#include "Mago.hpp"
Gargula::Gargula()
{
    frente = false;
}

Gargula::Gargula(const Vetor2F pos, Mago* mg): Inimigo(Ids::gargula, pos, Vetor2F(90.0f, 100.0f), 100.0, 150.0, mg, "../JogoTecProg/texture/gargula.png")
{
    frente = true;
}

Gargula::~Gargula()
{
}

void Gargula::atacar(float t)
{
    float distanciaY = posicao.y - mago->getPosicao().y;
    float distanciaX = posicao.x - mago->getPosicao().x;
    if (abs(distanciaX) < alcance && distanciaY > -alcance && distanciaY < 0)
    {
        if ((posicao.y - posicaoInicial.y) < alcance){
            posicao.y += t * velocidade;
        }
    }
} 

void Gargula::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
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

void Gargula::atualizar(float t)
{
    movimentar(t);
    atacar(t);
}

void Gargula::movimentar(float t)
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