#ifndef _ARVORE_HPP_
#define _ARVORE_HPP_

#include "Obstaculo.hpp"

class Arvore : public Obstaculo
{
private:
    bool frente;
    float velQueda;
    float velocidade;
    Vetor2F posicaoInicial;
public:
    Arvore ();
    Arvore (const Vetor2F pos);
    ~Arvore ();

    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
    void movimentar(float t);
};




#endif