#include "Fantasma.hpp"

Fantasma::Fantasma() : Inimigo()
{
    frente = false;
}

Fantasma::Fantasma(const Vetor2F pos): Inimigo(Ids::fantasma, pos, Vetor2F(50.0f, 50.0f), 200.0, 100.0,  "../JogoTecProg/texture/fantasma.png")
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

void Fantasma::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    if(id == Ids::plataforma)
    {
        posicao.y -= 2.0;
    }
}

void Fantasma::atualizar(float t)
{
    movimentar(t);
    posicao.y += t * 10;
    
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