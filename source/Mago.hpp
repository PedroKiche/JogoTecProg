#ifndef _MAGO_HPP_
#define _MAGO_HPP_

#include "Personagem.hpp"
#include "Controle.hpp"
#include"SuperNova.hpp"
#include "Fase.hpp"
class Fase;


class Mago : public Personagem
{
private:
    Controle controle;
    bool podePular;
    float altPulo;
    float aceleracao;
    Fase* fase;
    SuperNova* supernova;
    bool frente;
    bool podeAtacar;

public:
    Mago();
    Mago(const Vetor2F pos);
    ~Mago();

    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
    void movimentar(float t);
    void atirar();
    void setFase(Fase* fase);
};

#endif