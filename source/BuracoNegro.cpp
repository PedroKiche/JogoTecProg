#include"BuracoNegro.hpp"

BuracoNegro::BuracoNegro():Projetil()
{
    coeficiente_angular = 0;
    coeficiente_linear = 0;
}

BuracoNegro::BuracoNegro(const Vetor2F posIni, const Vetor2F posFin, const bool direito,const bool ativo, const float velocidade):
Projetil(Ids::buraconegro, posIni, Vetor2F(70.0,70.0),direito, ativo, velocidade, "../JogoTecProg/texture/buraconegro.png" )
{
    coeficiente_angular = ( (posFin.y - posIni.y) / (posFin.x - posIni.x) );
    coeficiente_linear = (posIni.y - (coeficiente_angular * posIni.x) );
}

BuracoNegro::~BuracoNegro()
{

}

void BuracoNegro::mover(const float t)
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

void BuracoNegro::atualizar(const float t)
{
    mover(t);
}

void BuracoNegro::colidir(const Ids::Id id,const Vetor2F pos, const Vetor2F tam)
{
    if(id != Ids::aparicao && id != Ids::alma && id != Ids::supernova && id != Ids::arvore)
    {
        ativo = false;
    }
}