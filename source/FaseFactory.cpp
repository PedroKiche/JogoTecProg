#include "FaseFactory.hpp"


FaseFactory::~FaseFactory()
{

}

FaseFactory::FaseFactory()
{

}

void FaseFactory::pedirFase()
{
   criaPlataformas();
   criaPosInimigos();
   criaPosObstaculos();
   criaInimigo();
   criaObstaculo();
}