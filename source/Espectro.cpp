#include "Espectro.h"
#include "Mago.h"

Espectro::Espectro() : Inimigo()
{
    teleportar = false;
    teleporte = 0;
    tempoTP = 0;
    ataque = 0;
}

Espectro::Espectro(const Vetor2F pos, Mago *mg, Mago *mg2) : Inimigo(Ids::espectro, pos, Vetor2F(105.0f, 170.0f), 200.0, 100.0, mg, mg2, "../JogoTecProg/texture/espectro.png")
{
    criaPosTeleporte();
    teleportar = false;
    tempoTP = 0;
    teleporte = 0;
    ataque = 0;
}

Espectro::~Espectro()
{
}

void Espectro::atacar(const float t)
{
    if (ataque > 10)
    {
        posicao = mago1->getPosicao();
        ataque = 0;
    }
    if (mago2)
    {
        if (ataque == 5)
            posicao = mago2->getPosicao();
    }
}

void Espectro::colidir(const Ids::Id id, const Vetor2F pos, const Vetor2F tam)
{
    if (id == Ids::supernova)
    {
        tempoTP = 0;
    }
    if (id == Ids::mago)
    {
        tempoTP = 0.5;
    }
}

void Espectro::atualizar(float t)
{
    atacar(t);
    movimentar(t);
}

void Espectro::movimentar(float t)
{
    tempoTP += t;
    if (tempoTP > 0.5)
    {
        teleportar = true;
        tempoTP = 0;
        ataque++;
    }
    if (teleportar)
    {
        posicao = posicoesTeleporta[teleporte];
        teleporte++;
        teleportar = false;
    }
    if (teleporte > 4)
        teleporte = 0;
}

void Espectro::criaPosTeleporte()
{
    posicoesTeleporta.push_back(Vetor2F(387.0f, 465.0f));
    posicoesTeleporta.push_back(Vetor2F(720.0f, 132.0f));
    posicoesTeleporta.push_back(Vetor2F(720.0f, 465.0f));
    posicoesTeleporta.push_back(Vetor2F(73.0f, 465.0f));
    posicoesTeleporta.push_back(Vetor2F(73.0f, 132.0f));
}