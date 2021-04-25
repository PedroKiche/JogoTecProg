#include "Personagem.hpp"

Personagem::Personagem() : Entidade_Colidivel()
{
    vivo = false;
    velocidade = 0;
}

Personagem::Personagem(const Vetor2F pos, const Vetor2F tam, float vel, const char *caminho) : Entidade_Colidivel(tam, pos, caminho)
{
    vivo = true;
    velocidade = vel;
}

Personagem::~Personagem()
{
}

float Personagem::getVelocidade()
{
    return velocidade;
}

void Personagem::setVelocidade(float vel)
{
    velocidade = vel;
}

void Personagem::setVivo(bool vivo)
{
    this->vivo = vivo;
}

bool Personagem::getVivo()
{
    return vivo;
}