#include "Gargula.hpp"

Gargula::Gargula()
{
    frente = false;
}

Gargula::Gargula(const Vetor2F pos): Inimigo(Ids::gargula, pos, Vetor2F(90.0f, 100.0f), 200.0, 150.0, "../JogoTecProg/texture/gargula.png")
{
    frente = true;
}

Gargula::~Gargula()
{
}

void Gargula::atacar(Mago &mago)
{
    //Implementar 
} 

void Gargula::colidir()
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
        if (getPosicao().x < getPosicaoInicial().x + getAlcance())
        {
            setPosicao(Vetor2F(getPosicao().x + t * getVelocidade(), getPosicao().y));
        }
        else
        {
            frente = false;
        }
    }
    else
    {
        if (getPosicao().x  > getPosicaoInicial().x - getAlcance())
        {
            setPosicao(Vetor2F(getPosicao().x - t * getVelocidade(), getPosicao().y)); 
        }
        else
        {
            frente = true;
        }
    }
}