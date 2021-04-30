#ifndef _FASE_HPP_
#define _FASE_HPP_

#include "Gerenciador_Colisoes.hpp"
#include "Lista_Entidades.hpp"
#include "Mago.hpp"
#include "Plataforma.hpp"

class Fase : public Entidade
{
protected:
    Gerenciador_Colisoes gc;
    Lista_Entidades listaEntidades;
    Gerenciador_Grafico *gf;
    Mago* mago;

public:
    Fase();
    Fase(Gerenciador_Grafico *GeGr, Mago *mg, Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho);
    ~Fase();

    void atualizar(float t);

    void adicionar(Entidade_Colidivel *ec);

    void inicializarEntidades();

    Mago* getMago();
};

#endif