#include"Purgatorio.hpp"
#include "Fantasma.hpp"

Purgatorio::Purgatorio():Fase()
{

}

Purgatorio::Purgatorio(Gerenciador_Grafico* gf, Mago* mg):Fase(gf, mg,Ids::purgatorio, Vetor2F(1600.0,300.0), Vetor2F(3200.0,600.0),"../JogoTecProg/texture/purgatorio.png")
{
    inicializarEntidades();
    inicializar(gf);
}

Purgatorio::~Purgatorio()
{

}

void Purgatorio::inicializarEntidades()
{   
    if(mago)
    {
        //adicionar(mago);
    }
    adicionar(new Plataforma(Vetor2F(1600.0f,520.0f), Vetor2F(3200.0f,10.0f)));
    adicionar(new Plataforma(Vetor2F(275.0f,415.0f), Vetor2F(150.0f,30.0f)));
    adicionar(new Fantasma(Vetor2F(300.0f,300.0F)));    
    
    listaEntidades.inicializarEntidades(gf);
}