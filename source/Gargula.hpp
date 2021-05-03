#ifndef _GARGULA_HPP_
#define _GARGULA_HPP_

#include "Inimigo.hpp"
class  Mago;

class Gargula: public Inimigo
{
private:
    bool frente;
public:
    Gargula();
    Gargula(const Vetor2F pos, Mago* mg);
    virtual ~Gargula();

    void atacar(float t);
    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
    void movimentar(float t);
};

#endif