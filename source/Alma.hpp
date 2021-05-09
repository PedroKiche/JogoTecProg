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

    void colidir(const Ids::Id id, const Vetor2F pos, const Vetor2F tam);
    void atualizar(const float t);
};

#endif