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
        adicionar(mago);
    }
   
    criaPlataformas();

    adicionar(new Fantasma(Vetor2F(300.0f,300.0F)));    
    
    listaEntidades.inicializarEntidades(gf);
}

void Purgatorio::criaPlataformas()
{
    adicionar(new Plataforma(Vetor2F(1600.0f,520.0f), Vetor2F(3200.0f,10.0f)));

    adicionar(new Plataforma(Vetor2F(275.0f,415.0f), Vetor2F(150.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(480.0f,345.0f), Vetor2F(100.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(675.0f,345.0f), Vetor2F(150.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(1250.0f,415.0f), Vetor2F(300.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(1750.0f,415.0f), Vetor2F(100.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(1925.0f,345.0f), Vetor2F(150.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(2100.0f,415.0f), Vetor2F(100.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(2550.0f,415.0f), Vetor2F(300.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(2750.0f,345.0f), Vetor2F(100.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(2850.0f,275.0f), Vetor2F(100.0f,30.0f)));
    adicionar(new Plataforma(Vetor2F(3025.0f,275.0f), Vetor2F(150.0f,30.0f)));
}