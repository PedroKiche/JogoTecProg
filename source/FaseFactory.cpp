#include "FaseFactory.h"


FaseFactory::~FaseFactory()
{

}

FaseFactory::FaseFactory()
{
   fase = NULL;
}

void FaseFactory::fabricaFase()
{
   criaPlataformas();
   criaPosInimigos();
   criaPosObstaculos();
   criaInimigo();
   criaObstaculo();
}