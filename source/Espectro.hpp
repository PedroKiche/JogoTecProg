#ifndef _ESPECTRO_HPP_
#define _ESPECTRO_HPP_

#include "Inimigo.hpp"

class Espectro: public Inimigo
{
public:
    Espectro();
    Espectro(const Vetor2F pos);
    virtual ~Espectro();

    void atacar(Mago &mago);
    void colidir();
    void atualizar(float t);
    void movimentar(float t);
};

#endif