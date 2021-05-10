#ifndef _FASE_H_
#define _FASE_H_

#include "Gerenciador_Colisoes.h"
#include "Lista_Entidades.h"
#include "Mago.h"
#include "Plataforma.h"
#include "Inimigo.h"
class  Mago;

class Fase : public Entidade
{
protected:
    Gerenciador_Colisoes gc;
    Lista_Entidades listaEntidades;
    bibliotecaGrafica::Gerenciador_Grafico *gf;
    Mago* mago1;
    Mago* mago2;
    std::set<Inimigo*> inimigos;
    int pontuacao;

public:
    Fase();
    Fase(bibliotecaGrafica::Gerenciador_Grafico *GeGr,const Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho, const bool jogador2 = false);
    ~Fase();

    void atualizar(const float t);

    void adicionar(Entidade_Colidivel *ec);

    void inicializa(Entidade_Colidivel *ec);

    void remover(Entidade_Colidivel *ec);

    void inicializarEntidades();

    Mago* getMago1() const;

    Mago* getMago2() const;

    void adicionarInimigo(Inimigo *ec);

    void verificarInimigos();

    virtual bool FaseAcabou();
    
    void ganhaPonto();
    void perdePonto();

    int getPontuacao()const;
    void setPontuacao(const int pont);
};

#endif