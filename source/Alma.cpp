#include "Alma.h"

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

void Alma::colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam)
{
    if (id == Ids::plataforma)
    {
        if (descendo)
        {
            descendo = false;
            posicao.y -= 10;
        }
        else
        {
            descendo = true;
            posicao.y += 10;
        }
    }
}

void Alma::atualizar(const float t)
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