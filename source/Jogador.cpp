#include "Jogador.hpp"

Jogador::Jogador() : Personagem()
{
}

Jogador::~Jogador()
{
}
Jogador::Jogador(const Vetor2F pos, const Vetor2F tam, const char *caminho) : Personagem(pos, tam, caminho)
{
}