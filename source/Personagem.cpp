#include "Personagem.hpp"

Personagem::Personagem() : Entidade_Colidivel()
{
    vivo = false;
    velocidade = 0;
    frente = false;
}

Personagem::Personagem(Ids::Id id, const Vetor2F pos, const Vetor2F tam, float vel, const char *caminho) : Entidade_Colidivel(id, pos, tam, caminho)
{
    vivo = true;
    velocidade = vel;
    frente = false;
}

Personagem::~Personagem()
{
}

float Personagem::getVelocidade() const
{
    return velocidade;
}

void Personagem::setVelocidade(const float vel)
{
    velocidade = vel;
}

void Personagem::setVivo(const bool vivo)
{
    this->vivo = vivo;
}

bool Personagem::getVivo() const
{
    return vivo;
}