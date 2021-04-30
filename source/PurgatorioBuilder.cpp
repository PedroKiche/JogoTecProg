#include"PurgatorioBuilder.hpp"


PurgatorioBuilder::PurgatorioBuilder(Gerenciador_Grafico* gf, Mago* mg): FaseBuilder()
{
    fase = new Purgatorio(gf, mg);
    fase->adicionar(mg);
}
PurgatorioBuilder::~PurgatorioBuilder()
{
}

void PurgatorioBuilder::criaPlataformas()
{
    fase->adicionar(new Plataforma(Vetor2F(1600.0f,520.0f), Vetor2F(3200.0f,10.0f))); // chao
    fase->adicionar(new Plataforma(Vetor2F(1600.0f,0.0f), Vetor2F(3200.0f,10.0f))); // teto

    fase->adicionar(new Plataforma(Vetor2F(275.0f,415.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(480.0f,345.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(675.0f,345.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(1250.0f,415.0f), Vetor2F(300.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(1750.0f,415.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(1925.0f,345.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(2100.0f,415.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(2550.0f,415.0f), Vetor2F(300.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(2750.0f,345.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(2850.0f,275.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(3025.0f,275.0f), Vetor2F(150.0f,30.0f)));

}
void PurgatorioBuilder::criaInimigo()
{
    fase->adicionar(new Fantasma(Vetor2F(300.0f,495.0F),fase->getMago()));
    fase->adicionar(new Fantasma(Vetor2F(750.0f,495.0F),fase->getMago()));
    fase->adicionar(new Fantasma(Vetor2F(1200.0f,495.0F),fase->getMago()));
    fase->adicionar(new Fantasma(Vetor2F(1250.0f,375.0F),fase->getMago()));
    fase->adicionar(new Fantasma(Vetor2F(1650.0f,495.0F),fase->getMago()));
    fase->adicionar(new Fantasma(Vetor2F(2100.0f,495.0F),fase->getMago()));
    fase->adicionar(new Fantasma(Vetor2F(2535.0f,375.0F),fase->getMago()));
    fase->adicionar(new Fantasma(Vetor2F(2550.0f,495.0F),fase->getMago()));
    fase->adicionar(new Fantasma(Vetor2F(2950.0f,495.0F),fase->getMago()));

    fase->adicionar(new Gargula(Vetor2F(670.0f,125.0F),fase->getMago()));
    fase->adicionar(new Gargula(Vetor2F(945.0f,250.0F),fase->getMago()));
    fase->adicionar(new Gargula(Vetor2F(1245.0f,195.0F),fase->getMago()));
    fase->adicionar(new Gargula(Vetor2F(1570.0f,250.0F),fase->getMago()));
    fase->adicionar(new Gargula(Vetor2F(1920.0f,125.0F),fase->getMago()));
    fase->adicionar(new Gargula(Vetor2F(2280.0f,250.0F),fase->getMago()));
    fase->adicionar(new Gargula(Vetor2F(2545.0f,195.0F),fase->getMago()));
    fase->adicionar(new Gargula(Vetor2F(3020.0f,80.0F),fase->getMago()));
    fase->adicionar(new Gargula(Vetor2F(3020.0f,330.0F),fase->getMago()));
}
void PurgatorioBuilder::criaObstaculo()
{
    fase->adicionar(new Alma(Vetor2F(150.0f, 60.0f)));
    fase->adicionar(new Alma(Vetor2F(275.0f, 60.0f)));
    fase->adicionar(new Alma(Vetor2F(390.0f, 60.0f)));
    fase->adicionar(new Alma(Vetor2F(480.0f, 60.0f)));
    fase->adicionar(new Alma(Vetor2F(1750.0f, 60.0f)));
    fase->adicionar(new Alma(Vetor2F(2100.0f, 60.0f)));
    fase->adicionar(new Alma(Vetor2F(2750.0f, 60.0f)));
    fase->adicionar(new Alma(Vetor2F(2850.0f, 60.0f)));
    fase->adicionar(new Alma(Vetor2F(3150.0f, 60.0f)));

    fase->adicionar(new Espinho(Vetor2F(275.0f, 380.0f)));
    fase->adicionar(new Espinho(Vetor2F(565.0f, 495.0f)));
    fase->adicionar(new Espinho(Vetor2F(675.0f, 310.0f)));
    fase->adicionar(new Espinho(Vetor2F(1250.0f, 380.0f)));
    fase->adicionar(new Espinho(Vetor2F(1550.0f, 495.0f)));
    fase->adicionar(new Espinho(Vetor2F(1925.0f, 310.0f)));
    fase->adicionar(new Espinho(Vetor2F(1925.0f, 495.0f)));
    fase->adicionar(new Espinho(Vetor2F(3025.0f, 240.0f)));
    fase->adicionar(new Espinho(Vetor2F(3025.0f, 495.0f)));
}

Fase* PurgatorioBuilder::getFase()
{
    Fase* aux = fase;
    fase = NULL;
    return aux;
}
