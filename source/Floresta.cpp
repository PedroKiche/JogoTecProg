#include"Floresta.h"

Floresta::Floresta():Fase()
{

}

Floresta::Floresta(bibliotecaGrafica::Gerenciador_Grafico* gf,const bool jogador2):Fase(gf,Ids::purgatorio, Vetor2F(1600.0,300.0), Vetor2F(3200.0,600.0),"../JogoTecProg/texture/floresta.png", jogador2)
{
    inicializar(gf);
}

Floresta::~Floresta()
{

}