#include "Mago.h"
#include"Fase.h"
#include <iostream>

Mago::Mago() : Personagem(),
               controle()
{
    altPulo = 0;
    aceleracao = 0;
    podePular = false;
    fase = NULL;
    supernova = NULL;
    podeAtacar=false;
    lentidao = 1;
}

Mago::~Mago()
{
    if(supernova != NULL)
    {
        fase->remover(supernova);
        delete supernova;
    }
}

Mago::Mago(const Vetor2F pos,const bool jogador2) : Personagem(Ids::mago, pos, Vetor2F(40.0f, 75.0f), 200.0)
{
    altPulo = 135;
    aceleracao = 0;
    podePular = true;
    fase = NULL;
    supernova = NULL;
    podeAtacar = true;
    lentidao = 1;
    if(!jogador2)
    {
        caminho =  "../JogoTecProg/texture/mago.png";
        controle = Controle(bibliotecaGrafica::Gerenciador_Teclado::A, bibliotecaGrafica::Gerenciador_Teclado::D, bibliotecaGrafica::Gerenciador_Teclado::W, bibliotecaGrafica::Gerenciador_Teclado::C);
    }
    else
    {
        caminho =  "../JogoTecProg/texture/mago2.png";
        controle = Controle(bibliotecaGrafica::Gerenciador_Teclado::J, bibliotecaGrafica::Gerenciador_Teclado::L, bibliotecaGrafica::Gerenciador_Teclado::I, bibliotecaGrafica::Gerenciador_Teclado::N);
    }
}

void Mago::colidir(const Ids::Id id,const Vetor2F pos, const Vetor2F tam)
{
    if (id == Ids::plataforma || id == Ids::arvore)
    {
        float deltaX = pos.x - posicao.x;
        float deltaY = pos.y - posicao.y;
        float interX = abs(deltaX) - (tam.x / 2 + tamanho.x / 2);
        float interY = abs(deltaY) - (tam.y / 2 + tamanho.y / 2);

        if (interX < 0.0f && interY < 0.0f)
        {
            if (interX > interY)
            {
                if (deltaX > 0.0f)
                {
                    posicao.x += interX;
                }
                else
                {
                    posicao.x -= interX;
                }
            }
            else
            {
                if (deltaY > 0.0f)
                {
                    podePular = true;
                    posicao.y += interY;
                    aceleracao = 0;
                }
                else
                {
                    posicao.y -= interY;
                    aceleracao = 0;
                }
            }
        }
    }
    if(Ids::espinhos == id)
    {
        lentidao = 0;
    }
    if (id == Ids::fantasma || id == Ids::gargula || id == Ids::alma || id == Ids::aparicao || id == Ids::buraconegro)
    {
        posicao.x = 50.0f;
        posicao.y = 400.0f;
        fase->perdePonto();
    }
    if(id == Ids::espectro)
    {
        posicao.x = 225.0f;
        posicao.y = 350.0f;
        fase->perdePonto();
    }
    
}

void Mago::atualizar(const float t)
{
    if(controle.atacar())
        atirar();
    if(!podeAtacar)
    {
        if(!supernova->getAtivo())
        {
            fase->remover(supernova);
            delete supernova;
            supernova = NULL;
            podeAtacar = true;
        }
    }
    if(lentidao < 1)
    {
        velocidade = 50.0f;
        lentidao += t;
    }
    else 
    {
        velocidade = 200.0f;
        lentidao = 1;
    }
    movimentar(t);
}


void Mago::movimentar(const float t)
{
    Vetor2F movimenta = controle.movimentacao();
    posicao.x += movimenta.x * t * velocidade;
    if (movimenta.y == -1 && podePular){
        podePular = false;
        aceleracao = - sqrt(2 * 1000 * altPulo);
    }
    if (movimenta.x >0)
        frente = true;
    else if (movimenta.x < 0 )
        frente = false;   
    aceleracao += t * 1000.0f;
    posicao.y += t * aceleracao;
}

void Mago::atirar()
{
    if(podeAtacar)
    {
        supernova = new SuperNova(Vetor2F(posicao.x, posicao.y),frente,true,300.0f);
        fase->adicionar(supernova);
        fase->inicializa(supernova);
        podeAtacar=false;
    }
}

void Mago::setFase(Fase* fase)
{
    this->fase = fase;
}   

 void Mago::morreu()
 {
     fase->perdePonto();
 }