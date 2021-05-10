#include"Limiar.h"


Limiar::Limiar():Fase()
{

}

Limiar::Limiar(bibliotecaGrafica::Gerenciador_Grafico* gf,const bool jogador2):Fase(gf,Ids::limiar, Vetor2F(400.0,300.0), Vetor2F(800.0,600.0),"../JogoTecProg/texture/limiar.png", jogador2)
{
    inicializar(gf);
}

Limiar::~Limiar()
{

}

bool Limiar::FaseAcabou()
{
    int posx = mago1->getPosicao().x;
    int posy = mago1->getPosicao().y;
    if(posx > 390 && posx < 410 && posy > 70 && posy < 140)
    {
        return true;
    }
    else if(mago2)
    {
        posx = mago2->getPosicao().x;
        posy = mago2->getPosicao().y;
        if(posx > 390 && posx < 410 && posy > 70 && posy < 140)
        {
            return true;
        }
    }
    return false;
}