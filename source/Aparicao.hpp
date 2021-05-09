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
    
public:
    Aparicao();
    Aparicao(const Vetor2F pos, Mago* mg,  Fase* fs, Mago* mg2 = NULL);
    ~Aparicao();

    void atacar(const float t);
    void colidir(const Ids::Id id, const Vetor2F pos,const Vetor2F tam);
    void atualizar(const float t);
    void movimentar(const float t);
    void atirar(Mago* mago);
};

#endif