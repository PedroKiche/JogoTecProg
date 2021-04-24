#ifndef _GARGULA_HPP_
#define _GARGULA_HPP_

#include "Inimigo.hpp"

class Gargula: public Inimigo
{
public:
    Gargula();
    Gargula(const Vetor2F pos);
    virtual ~Gargula();

    void atacar(Mago &mago);
    void colidir();
    void atualizar(float t);
    void movimentar(float t);
};

#endif