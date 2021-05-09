#ifndef _FANTASMA_HPP_
#define _FANTASMA_HPP_

#include "Inimigo.hpp"
class Mago;

class Fantasma: public Inimigo
{
private:
    float velQueda;
    bool atacando;
public:
    Fantasma();
    Fantasma(const Vetor2F pos, Mago* mg, Mago* mg2 = NULL);
    ~Fantasma();

    void atacar(const float t);
    void colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam);
    void atualizar(const float t);
    void movimentar(const float t);
};

#endif