#include"Purgatorio.h"

Purgatorio::Purgatorio():Fase()
{

}

Purgatorio::Purgatorio(bibliotecaGrafica::Gerenciador_Grafico* gf,const bool jogador2):Fase(gf,Ids::purgatorio, Vetor2F(1600.0,300.0), Vetor2F(3200.0,600.0),"../JogoTecProg/texture/purgatorio.png", jogador2)
{
    inicializar(gf);
}

Purgatorio::~Purgatorio()
{

}