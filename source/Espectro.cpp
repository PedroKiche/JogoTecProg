#include "Espectro.hpp"

Espectro::Espectro()
{
}

Espectro::Espectro(const Vetor2F pos, Mago* mg): Inimigo(Ids::espectro, pos, Vetor2F(105.0f, 170.0f), 200.0, 100.0, mg, "../JogoTecProg/texture/espectro.png")
{

}

Espectro::~Espectro()
{
}

void Espectro::atacar(float t)
{
    //Implementar 
} 

void Espectro::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    //Implementar
}

void Espectro::atualizar(float t)
{
    //Implementar
}

void Espectro::movimentar(float t)
{
    //Implementar
}