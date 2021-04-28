#ifndef _APARICAO_HPP_
#define _APARICAO_HPP_

#include "Inimigo.hpp"

class Aparicao: public Inimigo
{
private:

public:
    Aparicao();
    Aparicao(const Vetor2F pos, Mago* mg);
    virtual ~Aparicao();

    void atacar();
    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
    void movimentar(float t);
};

#endif