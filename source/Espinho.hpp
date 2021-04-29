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

    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
};

#endif