#ifndef _SUPERNOVA_HPP_
#define _SUPERNOVA_HPP_

#include"Projetil.hpp"

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