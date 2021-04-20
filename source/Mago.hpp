#ifndef _MAGO_HPP_
#define _MAGO_HPP_

#include"Jogador.hpp"

class Mago:public Jogador
{
private:

public:
    Mago();
    Mago(Vetor2F pos);
    ~Mago();

    void colidir();
    void atualizar(float t);
};

#endif