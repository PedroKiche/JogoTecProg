#ifndef _ENTIDADE_COLIDIVEL_H_
#define _ENTIDADE_COLIDIVEL_H_

#include "Entidade.h"

class Entidade_Colidivel : public Entidade
{
public:
    Entidade_Colidivel(const Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho = NULL);
    Entidade_Colidivel();
    virtual ~Entidade_Colidivel();
    virtual void colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam) = 0;
};

#endif