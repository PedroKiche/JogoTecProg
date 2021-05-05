#ifndef _APARICAO_HPP_
#define _APARICAO_HPP_

#include "Inimigo.hpp"
#include "BuracoNegro.hpp"

class Fase;

class Aparicao: public Inimigo
{
private:
    bool descendo;
    Fase* fase;
    BuracoNegro* buraconegro;
    bool podeAtacar;
    bool frente;
public:
    Aparicao();
    Aparicao(const Vetor2F pos, Mago* mg,  Fase* fs);
    ~Aparicao();

    void atacar(float t);
    void colidir(Ids::Id id, Vetor2F pos, Vetor2F tam);
    void atualizar(float t);
    void movimentar(float t);
    void atirar();
};

#endif