#include "Alma.hpp"

Alma::Alma(): Obstaculo()
{
    descendo = false;
}

Alma::Alma(const Vetor2F pos): Obstaculo(Ids::alma, pos, Vetor2F(50.0f, 50.0f), "../JogoTecProg/texture/alma.png")
{
    descendo = true;
}

Alma::~Alma()
{

}

void Alma::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    if (id == Ids::plataforma)
    {
        if (descendo)
        {
            descendo = false;
        }
        else
        {
            descendo = true;
        }
    }
}

void Alma::atualizar(float t)
{
    if (descendo)
    {
        posicao.y += t * 200;
    }
    else
    {
        posicao.y -= t * 200;
    }
}