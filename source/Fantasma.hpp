#ifndef _FANTASMA_HPP_
#define _FANTASMA_HPP_

#include "Inimigo.hpp"

class Fantasma: public Inimigo
{
private:
    bool frente;
public:
    Fantasma();
    Fantasma(const Vetor2F pos);
    virtual ~Fantasma();

    void atacar(Mago &mago);
    void colidir();
    void atualizar(float t);
    void movimentar(float t);
};

#endif