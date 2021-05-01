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
    SuperNova(Vetor2F pos, bool direito, bool ativo,float velocidade);
    ~SuperNova();

    void mover(float t);
    void atualizar(float t);
    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);

};

#endif