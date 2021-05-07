#include"Limiar.hpp"

Limiar::Limiar():Fase()
{

}

Limiar::Limiar(Gerenciador_Grafico* gf,bool jogador2):Fase(gf,Ids::limiar, Vetor2F(400.0,300.0), Vetor2F(800.0,600.0),"../JogoTecProg/texture/limiar.png", jogador2)
{
    inicializar(gf);
}

Limiar::~Limiar()
{

}