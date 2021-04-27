#ifndef _PLATAFORMA_HPP_
#define _PLATAFORMA_HPP_

#include"Entidade_Colidivel.hpp"

class Plataforma: public Entidade_Colidivel
{
public:
    Plataforma();
    Plataforma(const Vetor2F pos, const Vetor2F tam);
    ~Plataforma();

    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
};
#endif
