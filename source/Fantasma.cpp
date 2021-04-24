#include "Fantasma.hpp"

Fantasma::Fantasma()
{
    alcance = 0;
    frente = false;
}

Fantasma::Fantasma(const Vetor2F pos): Inimigo(pos, Vetor2F(50.0f, 50.0f), "../JogoTecProg/texture/fantasma.png")
{
    alcance = 200;
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
        if (posicao.x < getPosicaoInicial().x + alcance)
        {
            posicao.x += t * 100;   
        }
        else
        {
            frente = false;
        }
    }
    else
    {
        if (posicao.x > getPosicaoInicial().x - alcance)
        {
            posicao.x -= t * 100;   
        }
        else
        {
            frente = true;
        }
    }
}