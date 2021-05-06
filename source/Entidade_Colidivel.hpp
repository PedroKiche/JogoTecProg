#ifndef _ENTIDADE_COLIDIVEL_HPP_
#define _ENTIDADE_COLIDIVEL_HPP_

#include "Entidade.hpp"

class Entidade_Colidivel : public Entidade
{
public:
    Entidade_Colidivel(Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho = NULL);
    Entidade_Colidivel();
    virtual ~Entidade_Colidivel();
    virtual void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam) = 0;
};

#endif