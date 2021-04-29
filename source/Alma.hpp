#ifndef _ALMA_HPP_
#define _ALMA_HPP_

#include "Obstaculo.hpp"

class Alma : public Obstaculo
{
private:
    bool descendo;
public:
    Alma();
    Alma(const Vetor2F pos);
    ~Alma();

    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
};

#endif