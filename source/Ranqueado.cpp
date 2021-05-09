#include "Ranqueado.h"

Ranqueado::Ranqueado()
{
    pontos = 0;
    apelido = "";
}

Ranqueado::Ranqueado(const int pontos, const std::string nome)
{
    this->pontos = pontos;
    apelido = nome;
}

Ranqueado::~Ranqueado()
{
    
}

std::string Ranqueado::getApelido() const
{
    return apelido;
}
    
void Ranqueado::setApelido(const std::string apelido)
{
    this->apelido = apelido;
}

int Ranqueado::getPontos() const
{
    return pontos;
}

void Ranqueado::setPontos(const int pontos)
{
    this->pontos = pontos;
}