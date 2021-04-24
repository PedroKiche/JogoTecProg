#include "Gargula.hpp"

Gargula::Gargula()
{
}

Gargula::Gargula(const Vetor2F pos): Inimigo(pos, Vetor2F(90.0f, 100.0f), "../JogoTecProg/texture/gargula.png")
{
}

Gargula::~Gargula()
{
}

void Gargula::atacar(Mago &mago)
{
    //Implementar 
} 

void Gargula::colidir()
{
    //Implementar
}

void Gargula::atualizar(float t)
{
    //Implementar
}

void Gargula::movimentar(float t)
{
    //Implementar
}