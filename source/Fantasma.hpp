#ifndef _FANTASMA_HPP_
#define _FANTASMA_HPP_

#include "Inimigo.hpp"

class Fantasma: public Inimigo
{
private:
    bool frente;
    float velQueda;
    bool atacando;
public:
    Fantasma();
    Fantasma(const Vetor2F pos, Mago* mg);
    virtual ~Fantasma();

    void atacar(float t);
    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
    void movimentar(float t);
};

#endif