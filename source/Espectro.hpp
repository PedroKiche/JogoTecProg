#ifndef _ESPECTRO_HPP_
#define _ESPECTRO_HPP_

#include "Inimigo.hpp"
#include <vector>
class Mago;

class Espectro: public Inimigo
{
private:
    int teleporte;
    float tempoTP;
    std::vector<Vetor2F> posicoesTeleporta;
    bool teleportar;
    int ataque;

public:
    Espectro();
    Espectro(const Vetor2F pos, Mago* mg, Mago* mg2 = NULL);
    ~Espectro();

    void atacar(float t);
    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
    void movimentar(float t);
    void criaPosTeleporte();
};

#endif