#include"PurgatorioFactory.hpp"


PurgatorioFactory::PurgatorioFactory(Gerenciador_Grafico* gf, bool jogador2): FaseFactory()
{
    fase = new Purgatorio(gf,jogador2);
    srand(time(NULL));
}
PurgatorioFactory::~PurgatorioFactory()
{
}

void PurgatorioFactory::criaPlataformas()
{
    fase->adicionar(new Plataforma(Vetor2F(1600.0f,520.0f), Vetor2F(3200.0f,10.0f))); // chao
    fase->adicionar(new Plataforma(Vetor2F(1600.0f,0.0f), Vetor2F(3200.0f,10.0f))); // teto
    fase->adicionar(new Plataforma(Vetor2F(0.0f,300.0f), Vetor2F(10.0f,600.0f))); // parede inicio
    fase->adicionar(new Plataforma(Vetor2F(3300.0f,300.0f), Vetor2F(10.0f,600.0f))); // parede fim

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

void PurgatorioFactory::criaPosInimigos()
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

void PurgatorioFactory::criaPosObstaculos()
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

void PurgatorioFactory::criaInimigo()
{
    int s;
    s = rand()%(3);
    for (int i = 0; i < 5 + s; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionarInimigo(new Fantasma(posicoesFantasma[p],fase->getMago1(),fase->getMago2()));
        posicoesFantasma.erase(posicoesFantasma.begin() + p);
    }
    s = rand()%(3);
    for (int i = 0; i < 5 + s; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionarInimigo(new Gargula(posicoesGargula[p],fase->getMago1(),fase->getMago2()));
        posicoesGargula.erase(posicoesGargula.begin() + p);
    }
}

void PurgatorioFactory::criaObstaculo()
{
    int s;
    s = rand()%(3);
    for (int i = 0; i < 5 + s; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionar(new Alma(posicoesAlma[p]));
        posicoesAlma.erase(posicoesAlma.begin() + p);
    }
    s = rand()%(3);
    for (int i = 0; i < 5 + s; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionar(new Espinho(posicoesEspinho[p]));
        posicoesEspinho.erase(posicoesEspinho.begin() + p);
    }
}

Fase* PurgatorioFactory::pedirFase()
{
    fabricaFase();
    Fase* aux = fase;
    fase = NULL;
    return aux;
}