#include"SuperNova.h"
#include<iostream>

SuperNova::SuperNova():Projetil()
{
    alcance = 0;
    posInicialX = 0;
}

SuperNova:: SuperNova(const Vetor2F pos, const bool direito, const bool ativo,const float velocidade):
Projetil(Ids::supernova, pos , Vetor2F(25.0,25.0),direito,ativo,velocidade,"../JogoTecProg/texture/supernova.png")
{
    alcance = 300;
    posInicialX = pos.x;
}

SuperNova:: ~SuperNova()
{

}

void SuperNova::mover(const float t)
{
    if(direita)
    {   

        posicao.x += t* velocidade;
        if(posicao.x > posInicialX + alcance)
            ativo = false;
    }
    else
    {
        posicao.x -= t* velocidade;
        if(posicao.x < posInicialX - alcance)
            ativo = false;
    }
}

void SuperNova::atualizar(const float t)
{
    mover(t);
    
}

void SuperNova::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    if(id != Ids::mago && id != Ids::buraconegro && id != Ids::espinhos)
    {
        ativo = false;
    }
}