#ifndef _JOGADOR_HPP_
#define _JOGADOR_HPP_

#include "Personagem.hpp"

class Jogador : public Personagem
{
public:
    Jogador();
    virtual ~Jogador();
    Jogador(const Vetor2F pos, const Vetor2F tam, const char *caminho);
};

#endif