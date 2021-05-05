#include"BuracoNegro.hpp"

BuracoNegro::BuracoNegro():Projetil()
{
    coeficiente_angular = 0;
    coeficiente_linear = 0;
}

BuracoNegro::BuracoNegro(Vetor2F posIni, Vetor2F posFin,bool direito, bool ativo, float velocidade):
Projetil(Ids::buraconegro, posIni, Vetor2F(70.0,70.0),direito, ativo, velocidade, "../JogoTecProg/texture/buraconegro.png" )
{
    coeficiente_angular = ( (posFin.y - posIni.y) / (posFin.x - posIni.x) );
    coeficiente_linear = (posIni.y - (coeficiente_angular * posIni.x) );
}

BuracoNegro::~BuracoNegro()
{

}

void BuracoNegro::mover(float t)
{
    if(direita)
    {   
        posicao.x += t* velocidade;
        posicao.y = ( (coeficiente_angular*posicao.x) +coeficiente_linear);
    }
    else
    {
        posicao.x -= t* velocidade;
        posicao.y = ( (coeficiente_angular*posicao.x) +coeficiente_linear);
    }
}

void BuracoNegro::atualizar(float t)
{
    mover(t);
}

void BuracoNegro::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    if(id != Ids::aparicao && id != Ids::alma && id != Ids::supernova && id != Ids::arvore)
    {
        ativo = false;
    }
}