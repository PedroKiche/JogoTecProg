#ifndef _ARVORE_H_
#define _ARVORE_H_

#include "Obstaculo.h"

class Arvore : public Obstaculo
{
private:
    bool frente;
    float velQueda;
    float velocidade;
    const Vetor2F posicaoInicial;
public:
    Arvore ();
    Arvore (const Vetor2F pos);
    ~Arvore ();

    void colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam);
    void atualizar(const float t);
    void movimentar(const float t);
};




#endif