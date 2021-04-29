#include "Gargula.hpp"

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
    //Implementar 
} 

void Gargula::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    //Implementar
}

void Gargula::atualizar(float t)
{
    movimentar(t);
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