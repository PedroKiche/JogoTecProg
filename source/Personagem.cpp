#include"Personagem.hpp"


Personagem::Personagem():
Entidade_Colidivel()
{
    vivo = false;
}

Personagem::Personagem(const Vetor2F pos  , const Vetor2F tam  , const char* caminho):
Entidade_Colidivel(tam,pos,caminho)
{
    vivo = true;
}

Personagem::~Personagem()
{

}

void Personagem::setVivo(bool vivo)
{
    this->vivo = vivo;
}

bool Personagem::getVivo()
{
    return vivo;
}