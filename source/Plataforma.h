#ifndef _PLATAFORMA_H_
#define _PLATAFORMA_H_

#include"Entidade_Colidivel.h"

class Plataforma: public Entidade_Colidivel
{
public:
    Plataforma();
    Plataforma(const Vetor2F pos, const Vetor2F tam);
    ~Plataforma();

    void colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam);
    void atualizar(const float t);
};
#endif
