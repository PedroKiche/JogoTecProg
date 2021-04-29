#include"Purgatorio.hpp"
#include "Fantasma.hpp"
#include "Gargula.hpp"
#include "Alma.hpp"
#include "Espinho.hpp"

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
    criaInimigos();
    criaObstaculos();      
    
    listaEntidades.inicializarEntidades(gf);
}

void Purgatorio::criaPlataformas()
{
    adicionar(new Plataforma(Vetor2F(1600.0f,520.0f), Vetor2F(3200.0f,10.0f)));
    adicionar(new Plataforma(Vetor2F(1600.0f,0.0f), Vetor2F(3200.0f,10.0f)));

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

void Purgatorio::criaInimigos()
{
    adicionar(new Fantasma(Vetor2F(300.0f,495.0F),mago));
    adicionar(new Fantasma(Vetor2F(750.0f,495.0F),mago));
    adicionar(new Fantasma(Vetor2F(1200.0f,495.0F),mago));
    adicionar(new Fantasma(Vetor2F(1250.0f,375.0F),mago));
    adicionar(new Fantasma(Vetor2F(1650.0f,495.0F),mago));
    adicionar(new Fantasma(Vetor2F(2100.0f,495.0F),mago));
    adicionar(new Fantasma(Vetor2F(2535.0f,375.0F),mago));
    adicionar(new Fantasma(Vetor2F(2550.0f,495.0F),mago));
    adicionar(new Fantasma(Vetor2F(2950.0f,495.0F),mago));

    adicionar(new Gargula(Vetor2F(670.0f,125.0F),mago));
    adicionar(new Gargula(Vetor2F(945.0f,250.0F),mago));
    adicionar(new Gargula(Vetor2F(1245.0f,195.0F),mago));
    adicionar(new Gargula(Vetor2F(1570.0f,250.0F),mago));
    adicionar(new Gargula(Vetor2F(1920.0f,125.0F),mago));
    adicionar(new Gargula(Vetor2F(2280.0f,250.0F),mago));
    adicionar(new Gargula(Vetor2F(2545.0f,195.0F),mago));
    adicionar(new Gargula(Vetor2F(3020.0f,80.0F),mago));
    adicionar(new Gargula(Vetor2F(3020.0f,330.0F),mago));
}

void Purgatorio::criaObstaculos()
{
    adicionar(new Alma(Vetor2F(150.0f, 60.0f)));
    adicionar(new Alma(Vetor2F(275.0f, 60.0f)));
    adicionar(new Alma(Vetor2F(390.0f, 60.0f)));
    adicionar(new Alma(Vetor2F(480.0f, 60.0f)));
    adicionar(new Alma(Vetor2F(1750.0f, 60.0f)));
    adicionar(new Alma(Vetor2F(2100.0f, 60.0f)));
    adicionar(new Alma(Vetor2F(2750.0f, 60.0f)));
    adicionar(new Alma(Vetor2F(2850.0f, 60.0f)));
    adicionar(new Alma(Vetor2F(3150.0f, 60.0f)));

    adicionar(new Espinho(Vetor2F(275.0f, 380.0f)));
    adicionar(new Espinho(Vetor2F(565.0f, 495.0f)));
    adicionar(new Espinho(Vetor2F(675.0f, 310.0f)));
    adicionar(new Espinho(Vetor2F(1250.0f, 380.0f)));
    adicionar(new Espinho(Vetor2F(1550.0f, 495.0f)));
    adicionar(new Espinho(Vetor2F(1925.0f, 310.0f)));
    adicionar(new Espinho(Vetor2F(1925.0f, 495.0f)));
    adicionar(new Espinho(Vetor2F(3025.0f, 240.0f)));
    adicionar(new Espinho(Vetor2F(3025.0f, 495.0f)));
}
