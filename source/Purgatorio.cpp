#include"Purgatorio.hpp"

Purgatorio::Purgatorio():Fase()
{

}

Purgatorio::Purgatorio(Gerenciador_Grafico* gf):Fase(gf,Ids::purgatorio, Vetor2F(1600.0,300.0), Vetor2F(3200.0,600.0),"../JogoTecProg/texture/purgatorio.png")
{
    inicializar(gf);
}

Purgatorio::~Purgatorio()
{

}