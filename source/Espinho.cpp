#include "Espinho.h"

Espinho::Espinho(): Obstaculo()
{

}

Espinho::Espinho(const Vetor2F pos): Obstaculo(Ids::espinhos, pos, Vetor2F(50.0f, 40.0f), "../JogoTecProg/texture/espinho.png")
{

}

Espinho::~Espinho()
{

}

void Espinho::colidir(const Ids::Id id, const Vetor2F pos, const Vetor2F tam)
{
    
}

void Espinho::atualizar(const float t)
{
    
}