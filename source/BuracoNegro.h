#ifndef _BURACONEGRO_H_
#define _BURACONEGRO_H_

#include"Projetil.h"

class BuracoNegro:public Projetil
{
private:
    float coeficiente_angular;
    float coeficiente_linear;
public:
    BuracoNegro();
    BuracoNegro(const Vetor2F posIni, const Vetor2F posFin,const bool direito, const bool ativo,const float velocidade);
    ~BuracoNegro();

    void mover(const float t);
    void atualizar(const float t);
    void colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam);
    
};

#endif