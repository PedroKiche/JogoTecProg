#ifndef _OBSTACULO_HPP_
#define _OBSTACULO_HPP_

#include "Entidade_Colidivel.hpp"

class Obstaculo : public Entidade_Colidivel
{
private:

public:
    Obstaculo();
    Obstaculo(const Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char* caminho);
    virtual ~Obstaculo();
};
#endif