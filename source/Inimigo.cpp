#include"Inimigo.hpp"

Inimigo::Inimigo() : Personagem()
{
    posicaoInicial = Vetor2F(0.0f, 0.0f);
}

Inimigo::Inimigo(const Vetor2F pos, const Vetor2F tam, const char *caminho): Personagem(tam, pos, caminho)
{
    posicaoInicial = pos;
}

Inimigo::~Inimigo()
{
}

void Inimigo::setPosicaoInicial(Vetor2F pos)
{
    posicaoInicial = pos;
}

Vetor2F Inimigo::getPosicaoInicial()
{
    return posicaoInicial;
}