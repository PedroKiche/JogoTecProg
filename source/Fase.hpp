#ifndef _FASE_HPP_
#define _FASE_HPP_

#include "Gerenciador_Colisoes.hpp"
#include "Lista_Entidades.hpp"
#include "Mago.hpp"
#include "Plataforma.hpp"
#include "Inimigo.hpp"
class  Mago;

class Fase : public Entidade
{
protected:
    Gerenciador_Colisoes gc;
    Lista_Entidades listaEntidades;
    Gerenciador_Grafico *gf;
    Mago* mago1;
    Mago* mago2;
    std::set<Inimigo*> inimigos;
    int pontuacao;

public:
    Fase();
    Fase(Gerenciador_Grafico *GeGr, Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho, bool jogador2);
    ~Fase();

    void atualizar(float t);

    void adicionar(Entidade_Colidivel *ec);

    void inicializa(Entidade_Colidivel *ec);

    void remover(Entidade_Colidivel *ec);

    void inicializarEntidades();

    Mago* getMago1();

    Mago* getMago2();

    void adicionarInimigo(Inimigo *ec);

    void verificarInimigos();

    virtual bool FaseAcabou();
    
    void ganhaPonto();
    void perdePonto();

    int getPontuacao();
    void setPontuacao(const int pont);
};

#endif