#include "Fantasma.hpp"

Fantasma::Fantasma() : Inimigo()
{
    frente = false;
}

Fantasma::Fantasma(const Vetor2F pos): Inimigo(pos, Vetor2F(50.0f, 50.0f), 200.0, 100.0,  "../JogoTecProg/texture/fantasma.png")
{
    frente = true;
}

Fantasma::~Fantasma()
{
}

void Fantasma::atacar(Mago &mago)
{
    //Implementar 
} 

void Fantasma::colidir()
{
    //Implementar
}

void Fantasma::atualizar(float t)
{
    movimentar(t);
}

void Fantasma::movimentar(float t)
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