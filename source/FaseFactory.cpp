#include "FaseFactory.hpp"


FaseFactory::~FaseFactory()
{

}

FaseFactory::FaseFactory()
{

}

void FaseFactory::fabricaFase()
{
   criaPlataformas();
   criaPosInimigos();
   criaPosObstaculos();
   criaInimigo();
   criaObstaculo();
}