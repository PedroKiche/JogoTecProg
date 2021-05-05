#ifndef _BURACONEGRO_HPP_
#define _BURACONEGRO_HPP_

#include"Projetil.hpp"

class BuracoNegro:public Projetil
{
private:
    float coeficiente_angular;
    float coeficiente_linear;
public:
    BuracoNegro();
    BuracoNegro(Vetor2F posIni, Vetor2F posFin,bool direito, bool ativo, float velocidade);
    ~BuracoNegro();

    void mover(float t);
    void atualizar(float t);
    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    
};

#endif