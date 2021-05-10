#ifndef _LISTA_ENTIDADES_H_
#define _LISTA_ENTIDADES_H_

#include "Entidade.h"
#include "Lista.h"

class Lista_Entidades
{
private:
    Lista<Entidade*> lista;

public:
    Lista_Entidades();
    ~Lista_Entidades();

    void inserir(Entidade* info);
    
    void inicializarEntidades(bibliotecaGrafica::Gerenciador_Grafico* gf);
    void atualizarEntidades(float t);
    void desenharEntidades(bibliotecaGrafica::Gerenciador_Grafico* gf);
    void destruirEntidades();
    void removerEntidade(Entidade* info);
};

#endif