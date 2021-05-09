#ifndef _SUPERNOVA_H_
#define _SUPERNOVA_H_

#include"Projetil.h"

class SuperNova:public Projetil
{
private:
    float alcance;
    float posInicialX;
public:
    SuperNova();
    SuperNova(const Vetor2F pos,const bool direito,const bool ativo,const float velocidade);
    ~SuperNova();

    void mover(float t);
    void atualizar(float t);
    void colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam);

};

#endif