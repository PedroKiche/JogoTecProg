#ifndef _OBSTACULO_H_
#define _OBSTACULO_H_

#include "Entidade_Colidivel.h"

class Obstaculo : public Entidade_Colidivel
{
private:

public:
    Obstaculo();
    Obstaculo(const Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char* caminho);
    virtual ~Obstaculo();
};
#endif