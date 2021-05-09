#include "Inimigo.h"
#include "Mago.h"

Inimigo::Inimigo() : Personagem()
{
    posicaoInicial = Vetor2F(0.0f, 0.0f);
    alcance = 0;
    mago1 = NULL;
    mago2 = NULL;
}

Inimigo::Inimigo(const Ids::Id id, const Vetor2F pos, const Vetor2F tam, const float alc, const float vel, Mago *mg, Mago *mg2, const char *caminho) : Personagem(id, pos, tam, vel, caminho)
{
    posicaoInicial = pos;
    alcance = alc;
    mago1 = mg;
    mago2 = mg2;
}

Inimigo::~Inimigo()
{
}

float Inimigo::getAlcance() const
{
    return alcance;
}

void Inimigo::setAlcance(float alc)
{
    alcance = alc;
}

void Inimigo::setPosicaoInicial(const Vetor2F pos)
{
    posicaoInicial = pos;
}

Vetor2F Inimigo::getPosicaoInicial() const
{
    return posicaoInicial;
}
