#ifndef _MAGO_H_
#define _MAGO_H_

#include "Personagem.h"
#include "Controle.h"
#include"SuperNova.h"

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
    bool podeAtacar;
    float lentidao;

public:
    Mago();
    Mago(const Vetor2F pos, const bool jogador2 = false);
    ~Mago();

    void colidir(const Ids::Id id,const Vetor2F pos, const Vetor2F tam);
    void atualizar(const float t);
    void movimentar(const float t);
    void atirar();
    void setFase(Fase* fase);
    void morreu();
};

#endif