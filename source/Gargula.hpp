#ifndef _GARGULA_HPP_
#define _GARGULA_HPP_

#include "Inimigo.hpp"

class Gargula: public Inimigo
{
private:
    bool frente;
public:
    Gargula();
    Gargula(const Vetor2F pos);
    virtual ~Gargula();

    void atacar(Mago &mago);
    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
    void movimentar(float t);
};

#endif