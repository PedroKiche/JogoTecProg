#ifndef _ESPINHO_H_
#define _ESPINHO_H_

#include "Obstaculo.h"

class Espinho : public Obstaculo
{
private:
public:
    Espinho();
    Espinho(const Vetor2F pos);
    ~Espinho();

    void colidir(const Ids::Id id,const Vetor2F pos,const Vetor2F tam);
    void atualizar(const float t);
};

#endif