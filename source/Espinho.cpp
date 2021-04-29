#include "Espinho.hpp"

Espinho::Espinho(): Obstaculo()
{

}

Espinho::Espinho(const Vetor2F pos): Obstaculo(Ids::alma, pos, Vetor2F(50.0f, 40.0f), "../JogoTecProg/texture/espinho.png")
{

}

Espinho::~Espinho()
{

}

void Espinho::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    
}

void Espinho::atualizar(float t)
{
    
}