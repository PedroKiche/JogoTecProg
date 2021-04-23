#ifndef _MAGO_HPP_
#define _MAGO_HPP_

#include "Personagem.hpp"
#include "Controle.hpp"

class Mago : public Personagem
{
private:
    Controle controle;

public:
    Mago();
    Mago(Vetor2F pos);
    ~Mago();

    void colidir();
    void atualizar(float t);
};

#endif