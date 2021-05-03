#include "Mago.hpp"
#include"Fase.hpp"
#include <iostream>

Mago::Mago() : Personagem(),
               controle()
{
    altPulo = 0;
    aceleracao = 0;
    podePular = false;
    fase = NULL;
    supernova = NULL;
    frente = false;
    podeAtacar=false;
}

Mago::~Mago()
{
}

Mago::Mago(const Vetor2F pos) : Personagem(Ids::mago, pos, Vetor2F(40.0f, 75.0f), 200.0, "../JogoTecProg/texture/mago.png"),
                          controle(Teclado::A, Teclado::D, Teclado::W, Teclado::C)
{
    altPulo = 135;
    aceleracao = 0;
    podePular = true;
    fase = NULL;
    supernova = NULL;
    frente = false;
    podeAtacar = true;
}

void Mago::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    if (id == Ids::plataforma)
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
        //velocidade = 50.0f;
    }
    
}

void Mago::atualizar(float t)
{
    if(controle.atacar())
        atirar();
    if(!podeAtacar)
    {
        if(!supernova->getAtivo())
        {
            fase->remover(supernova);
            delete supernova;
            podeAtacar = true;
        }
    }
    movimentar(t);
}

void atacar()
{
}

void Mago::movimentar(float t)
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