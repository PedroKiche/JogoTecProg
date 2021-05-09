#ifndef _ALMA_H_
#define _ALMA_H_

#include "Obstaculo.h"

class Alma : public Obstaculo
{
private:
    bool descendo;
public:
    Alma();
    Alma(const Vetor2F pos);
    ~Alma();

    void colidir(const Ids::Id id, const Vetor2F pos, const Vetor2F tam);
    void atualizar(const float t);
};

#endif