#include "Fantasma.h"
#include "Mago.h"
#include <iostream>

Fantasma::Fantasma() : Inimigo()
{
    atacando = false;
    velQueda = 0;
}

Fantasma::Fantasma(const Vetor2F pos, Mago *mg, Mago *mg2) : Inimigo(Ids::fantasma, pos, Vetor2F(50.0f, 50.0f), 130.0, 100.0, mg, mg2, "../JogoTecProg/texture/fantasma.png")
{
    velQueda = 0;
    atacando = false;
}

Fantasma::~Fantasma()
{
}

void Fantasma::atacar(const float t)
{
    float distancia = posicao.x - mago1->getPosicao().x;
    if (abs(distancia) < alcance && abs(posicao.y - mago1->getPosicao().y) < 50)
    {
        atacando = true;
        velocidade = 150.0f;
        if (distancia > 0)
            posicao.x -= t * velocidade;
        else
            posicao.x += t * velocidade;
    }
    else if (mago2)
    {
        distancia = posicao.x - mago2->getPosicao().x;
        if (abs(distancia) < alcance && abs(posicao.y - mago1->getPosicao().y) < 50)
        {
            atacando = true;
            velocidade = 150.0f;
            if (distancia > 0)
                posicao.x -= t * velocidade;
            else
                posicao.x += t * velocidade;
        }
        else
        {
            velocidade = 100.0f;
            atacando = false;
        }
    }
    else
    {
        velocidade = 100.0f;
        atacando = false;
    }
}

void Fantasma::colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam)
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
    if (id == Ids::supernova)
    {
        vivo = false;
    }
}

void Fantasma::atualizar(const float t)
{
    if (atacando == false)
        movimentar(t);

    atacar(t);
    velQueda += 1000.0f * t;
    posicao.y += velQueda * t;
}

void Fantasma::movimentar(const float t)
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
        if (posicao.x > posicaoInicial.x - alcance)
        {
            posicao.x -= t * velocidade;
        }
        else
        {
            frente = true;
        }
    }
}