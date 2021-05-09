#ifndef _GARGULA_HPP_
#define _GARGULA_HPP_

#include "Inimigo.hpp"
class  Mago;

class Gargula: public Inimigo
{
public:
    Gargula();
    Gargula(const Vetor2F pos, Mago* mg, Mago* mg2 = NULL);
    ~Gargula();

    void atacar(const float t);
    void colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam);
    void atualizar(const float t);
    void movimentar(const float t);
};

#endif