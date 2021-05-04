#include"FlorestaFactory.hpp"


FlorestaFactory::FlorestaFactory(Gerenciador_Grafico* gf, Mago* mg): FaseFactory()
{
    fase = new Floresta(gf, mg);
    fase->adicionar(mg);
    srand(time(NULL));
}
FlorestaFactory::~FlorestaFactory()
{
}

void FlorestaFactory::criaPlataformas()
{   
    fase->adicionar(new Plataforma(Vetor2F(1600.0f,480.0f), Vetor2F(3200.0f,10.0f))); // chao
    fase->adicionar(new Plataforma(Vetor2F(1600.0f,0.0f), Vetor2F(3200.0f,10.0f))); // teto

    fase->adicionar(new Plataforma(Vetor2F(350.0f,375.0f), Vetor2F(300.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(550.0f,305.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(650.0f,235.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(825.0f,235.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(1150.0f,375.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(1325.0f,305.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(1500.0f,375.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(2000.0f,375.0f), Vetor2F(300.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(2475.0f,375.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(2680.0f,305.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(2875.0f,305.0f), Vetor2F(150.0f,30.0f)));
}

void FlorestaFactory::criaPosInimigos()
{
    
    posicoesFantasma.push_back(Vetor2F(335.0f,335.0F));
    posicoesFantasma.push_back(Vetor2F(350.0f,445.0F));
    posicoesFantasma.push_back(Vetor2F(750.0f,445.0F));
    posicoesFantasma.push_back(Vetor2F(1150.0f,445.0F));
    posicoesFantasma.push_back(Vetor2F(1500.0f,445.0F));
    posicoesFantasma.push_back(Vetor2F(2000.0f,335.0F));
    posicoesFantasma.push_back(Vetor2F(2000.0f,445.0F));
    posicoesFantasma.push_back(Vetor2F(2475.0f,445.0F));
    posicoesFantasma.push_back(Vetor2F(2950.0f,445.0F));
    

    
    posicoesAparicao.push_back(Vetor2F(350.0f,155.0F));
    posicoesAparicao.push_back(Vetor2F(825.0f,40.0F));
    posicoesAparicao.push_back(Vetor2F(825.0f,290.0F));
    posicoesAparicao.push_back(Vetor2F(995.0f,210.0F));
    posicoesAparicao.push_back(Vetor2F(1325.0f,85.0F));
    posicoesAparicao.push_back(Vetor2F(1695.0f,210.0F));
    posicoesAparicao.push_back(Vetor2F(2000.0f,155.0F));
    posicoesAparicao.push_back(Vetor2F(2305.0f,210.0F));
    posicoesAparicao.push_back(Vetor2F(2875.0f,85.0F));
    
}

void FlorestaFactory::criaPosObstaculos()
{
    /*
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
    */
}

void FlorestaFactory::criaInimigo()
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
        fase->adicionarInimigo(new Aparicao(posicoesAparicao[p],fase->getMago()));
        posicoesAparicao.erase(posicoesAparicao.begin() + p);
    }
    
}

void FlorestaFactory::criaObstaculo()
{
    /*
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
    */
}

Fase* FlorestaFactory::pedirFase()
{
    fabricaFase();
    Fase* aux = fase;
    fase = NULL;
    return aux;
}