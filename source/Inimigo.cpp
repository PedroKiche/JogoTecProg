#include"Inimigo.hpp"

Inimigo::Inimigo() : Personagem()
{
    posicaoInicial = Vetor2F(0.0f, 0.0f);
    alcance = 0;
}

Inimigo::Inimigo(Ids::Id id, const Vetor2F pos, const Vetor2F tam, float alc, float vel, const char *caminho): Personagem(id, pos, tam, vel, caminho)
{
    posicaoInicial = pos;
    alcance = alc;
}

Inimigo::~Inimigo()
{
}

float Inimigo::getAlcance()
{
    return alcance;
}

void Inimigo::setAlcance(float alc)
{
    alcance = alc;
}

void Inimigo::setPosicaoInicial(Vetor2F pos)
{
    posicaoInicial = pos;
}

Vetor2F Inimigo::getPosicaoInicial()
{
    return posicaoInicial;
}
