#include"PurgatorioBuilder.hpp"


PurgatorioBuilder::PurgatorioBuilder(Gerenciador_Grafico* gf, Mago* mg): FaseBuilder()
{
    fase = new Purgatorio(gf, mg);
    fase->adicionar(mg);
    srand(time(NULL));
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

void PurgatorioBuilder::criaPosInimigos()
{
    posicoesFantasma.push_back(Vetor2F(300.0f,495.0F));
    posicoesFantasma.push_back(Vetor2F(750.0f,495.0F));
    posicoesFantasma.push_back(Vetor2F(1200.0f,495.0F));
    posicoesFantasma.push_back(Vetor2F(1250.0f,375.0F));
    posicoesFantasma.push_back(Vetor2F(1650.0f,495.0F));
    posicoesFantasma.push_back(Vetor2F(2100.0f,495.0F));
    posicoesFantasma.push_back(Vetor2F(2535.0f,375.0F));
    posicoesFantasma.push_back(Vetor2F(2550.0f,495.0F));
    posicoesFantasma.push_back(Vetor2F(2950.0f,495.0F));

    posicoesGargula.push_back(Vetor2F(670.0f,125.0F));
    posicoesGargula.push_back(Vetor2F(945.0f,250.0F));
    posicoesGargula.push_back(Vetor2F(1245.0f,195.0F));
    posicoesGargula.push_back(Vetor2F(1570.0f,250.0F));
    posicoesGargula.push_back(Vetor2F(1920.0f,125.0F));
    posicoesGargula.push_back(Vetor2F(2280.0f,250.0F));
    posicoesGargula.push_back(Vetor2F(2545.0f,195.0F));
    posicoesGargula.push_back(Vetor2F(3020.0f,80.0F));
    posicoesGargula.push_back(Vetor2F(3020.0f,330.0F));
}

void PurgatorioBuilder::criaPosObstaculos()
{
    posicoesAlma.push_back(Vetor2F(150.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(275.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(390.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(480.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(1750.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(2100.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(2750.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(2850.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(3150.0f, 60.0f));

    posicoesEspinho.push_back(Vetor2F(275.0f, 380.0f));
    posicoesEspinho.push_back(Vetor2F(565.0f, 495.0f));
    posicoesEspinho.push_back(Vetor2F(675.0f, 310.0f));
    posicoesEspinho.push_back(Vetor2F(1250.0f, 380.0f));
    posicoesEspinho.push_back(Vetor2F(1550.0f, 495.0f));
    posicoesEspinho.push_back(Vetor2F(1925.0f, 310.0f));
    posicoesEspinho.push_back(Vetor2F(1925.0f, 495.0f));
    posicoesEspinho.push_back(Vetor2F(3025.0f, 240.0f));
    posicoesEspinho.push_back(Vetor2F(3025.0f, 495.0f));
}

void PurgatorioBuilder::criaInimigo()
{
    for (int i = 0; i < 5; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionarInimigo(new Fantasma(posicoesFantasma[p],fase->getMago()));
        posicoesFantasma.erase(posicoesFantasma.begin() + p);
    }
    
    for (int i = 0; i < 5; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionarInimigo(new Gargula(posicoesGargula[p],fase->getMago()));
        posicoesGargula.erase(posicoesGargula.begin() + p);
    }
}

void PurgatorioBuilder::criaObstaculo()
{
    for (int i = 0; i < 5; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionar(new Alma(posicoesAlma[p]));
        posicoesAlma.erase(posicoesAlma.begin() + p);
    }
    
    for (int i = 0; i < 5; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionar(new Espinho(posicoesEspinho[p]));
        posicoesEspinho.erase(posicoesEspinho.begin() + p);
    }
}

Fase* PurgatorioBuilder::getFase()
{
    Fase* aux = fase;
    fase = NULL;
    return aux;
}
