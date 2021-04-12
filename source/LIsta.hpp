#ifndef _LISTA_HPP_
#define _LISTA_HPP_

template<typename TIPO>
class Lista
{
private:
    template<typename TIPO>
    class Elemento
    {
    private:
        TIPO info;
        Elemento* anterior;
        Elemento* proximo;
    public:
        Elemento(TIPO info =NULL, Elemento* anterior = NULL, Elemento* proximo = NULL);
        ~Elemento();

        TIPO getInfo();
        void setInfo(TIPO info);

        Elemento* getAnterior();
        void setAnterior(Elemento* ant);

        Elemento* setProximo();
        void setProximo(Elemento* prox);
    };

    Elemento* inicio;
    Elemento* fim;
    Elemento* atual;

public:
    Lista();
    ~Lista();

    void inserir(TIPO elem);
    void limpar();

};

#include "ListaImplementacao.hpp"
#endif