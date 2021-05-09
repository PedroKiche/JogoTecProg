#include"LimiarFactory.hpp"


LimiarFactory::LimiarFactory(Gerenciador_Grafico* gf, const bool jogador2): FaseFactory()
{
    fase = new Limiar(gf,jogador2);
    srand(time(NULL));
}
LimiarFactory::~LimiarFactory()
{
}

void LimiarFactory::criaPlataformas()
{
    fase->adicionar(new Plataforma(Vetor2F(400.0f,540.0f), Vetor2F(800.0f,10.0f))); // chao
    fase->adicionar(new Plataforma(Vetor2F(400.0f,0.0f), Vetor2F(800.0f,10.0f))); // teto
    fase->adicionar(new Plataforma(Vetor2F(0.0f,300.0f), Vetor2F(10.0f,600.0f))); // parede inicio
    fase->adicionar(new Plataforma(Vetor2F(800.0f,300.0f), Vetor2F(10.0f,600.0f))); // parede fim

    fase->adicionar(new Plataforma(Vetor2F(90.0f,365.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(225.0f,435.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(225.0f,245.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(400.0f,145.0f), Vetor2F(100.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(575.0f,435.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(575.0f,245.0f), Vetor2F(150.0f,30.0f)));
    fase->adicionar(new Plataforma(Vetor2F(700.0f,365.0f), Vetor2F(150.0f,30.0f)));
}

void LimiarFactory::criaPosInimigos()
{
   
}

void LimiarFactory::criaPosObstaculos()
{
    
}

void LimiarFactory::criaInimigo()
{
    fase->adicionarInimigo(new Espectro(Vetor2F(73.0f,100.0f),fase->getMago1(), fase->getMago2()));
}

void LimiarFactory::criaObstaculo()
{
    
}

Fase* LimiarFactory::pedirFase()
{
    fabricaFase();
    Fase* aux = fase;
    fase = NULL;
    return aux;
}