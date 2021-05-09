#ifndef _ESPINHO_HPP_
#define _ESPINHO_HPP_

#include "Obstaculo.hpp"

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