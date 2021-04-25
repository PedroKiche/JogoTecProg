#include "Gargula.hpp"

Gargula::Gargula()
{
    frente = false;
}

Gargula::Gargula(const Vetor2F pos): Inimigo(pos, Vetor2F(90.0f, 100.0f), 200.0, 150.0, "../JogoTecProg/texture/gargula.png")
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
        if (posicao.x < getPosicaoInicial().x + getAlcance())
        {
            posicao.x += t * getVelocidade();   
        }
        else
        {
            frente = false;
        }
    }
    else
    {
        if (posicao.x > getPosicaoInicial().x - getAlcance())
        {
            posicao.x -= t * getVelocidade();   
        }
        else
        {
            frente = true;
        }
    }
}