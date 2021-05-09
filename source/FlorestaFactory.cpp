#include"FlorestaFactory.h"


FlorestaFactory::FlorestaFactory(Gerenciador_Grafico* gf, const bool jogador2): FaseFactory()
{
    fase = new Floresta(gf,jogador2);
    srand(time(NULL));
}
FlorestaFactory::~FlorestaFactory()
{
}

void FlorestaFactory::criaPlataformas()
{   
    fase->adicionar(new Plataforma(Vetor2F(1600.0f,480.0f), Vetor2F(3200.0f,10.0f))); // chao
    fase->adicionar(new Plataforma(Vetor2F(1600.0f,0.0f), Vetor2F(3200.0f,10.0f))); // teto
    fase->adicionar(new Plataforma(Vetor2F(0.0f,300.0f), Vetor2F(10.0f,600.0f))); // parede inicio
    fase->adicionar(new Plataforma(Vetor2F(3300.0f,300.0f), Vetor2F(10.0f,600.0f))); // parede fim

    fase->adicionar(new Plataforma(Vetor2F(105.0f,445.0f), Vetor2F(30.0f,70.0f)));
    fase->adicionar(new Plataforma(Vetor2F(370.0f,375.0f), Vetor2F(300.0f,30.0f)));
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
    

    
    posicoesAparicao.push_back(Vetor2F(220.0f,155.0F));
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
    
    posicoesAlma.push_back(Vetor2F(550.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(650.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(1150.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(1500.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(1800.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(2200.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(2475.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(2680.0f, 60.0f));
    posicoesAlma.push_back(Vetor2F(3075.0f, 60.0f));

    posicoesArvore.push_back(Vetor2F(650.0f, 200.0f));
    posicoesArvore.push_back(Vetor2F(825.0f, 200.0f));
    posicoesArvore.push_back(Vetor2F(1150.0f, 340.0f));
    posicoesArvore.push_back(Vetor2F(1325.0f, 270.0f));
    posicoesArvore.push_back(Vetor2F(1500.0f, 340.0f));
    posicoesArvore.push_back(Vetor2F(2475.0f, 340.0f));
    posicoesArvore.push_back(Vetor2F(2680.0f, 270.0f));
    posicoesArvore.push_back(Vetor2F(2875.0f, 270.0f));
    posicoesArvore.push_back(Vetor2F(3100.0f, 445.0f));
}

void FlorestaFactory::criaInimigo()
{
    int s;
    s = rand()%(3);
    for (int i = 0; i < 5 + s; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionarInimigo(new Fantasma(posicoesFantasma[p],fase->getMago1(), fase->getMago2()));
        posicoesFantasma.erase(posicoesFantasma.begin() + p);
    }
    s = rand()%(3);
    for (int i = 0; i < 5 + s; i++)
    {
        int p = rand()%(9 - i);
        fase->adicionarInimigo(new Aparicao(posicoesAparicao[p],fase->getMago1(), fase, fase->getMago2()));
        posicoesAparicao.erase(posicoesAparicao.begin() + p);
    }
    
}

void FlorestaFactory::criaObstaculo()
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
        fase->adicionar(new Arvore(posicoesArvore[p]));
        posicoesArvore.erase(posicoesArvore.begin() + p);
    }
    
}

Fase* FlorestaFactory::pedirFase()
{
    fabricaFase();
    Fase* aux = fase;
    fase = NULL;
    return aux;
}