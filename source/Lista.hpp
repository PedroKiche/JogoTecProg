#ifndef _LISTA_HPP_
#define _LISTA_HPP_

template <typename TL>
class Lista
{
private:
    template <typename TE>
    class Elemento
    {
    private:
        TE info;
        Elemento *anterior;
        Elemento *proximo;

    public:
        Elemento(TE info = NULL, Elemento *anterior = NULL, Elemento *proximo = NULL);
        ~Elemento();

        TE getInfo() const;
        void setInfo(const TE  info);

        Elemento *getAnt() const;
        void setAnt(Elemento*  ant);

        Elemento *getProx() const;
        void setProx(Elemento*  prox);

        void remover();
    };

    Elemento<TL> *inicio;
    Elemento<TL> *fim;
    Elemento<TL> *atual;

public:
    Lista();
    ~Lista();

    void inserir(TL elem);
    void limpar();

    TL getInicio();
    TL irProx();
};

#include "ListaImplementacao.hpp"
#endif