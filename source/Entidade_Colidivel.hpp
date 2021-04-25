#ifndef _ENTIDADE_COLIDIVEL_HPP_
#define _ENTIDADE_COLIDIVEL_HPP_

#include "Entidade.hpp"

class Entidade_Colidivel : public Entidade
{
public:
    Entidade_Colidivel(Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho);
    Entidade_Colidivel();
    virtual ~Entidade_Colidivel();
    virtual void colidir() = 0;
};

#endif