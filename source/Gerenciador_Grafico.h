#ifndef _GERENCIADOR_GRAFICO_H_
#define _GERENCIADOR_GRAFICO_H_

#include<SFML/Graphics.hpp>

#include <map>
#include <string>

#include "Vetor2D.h"

class Gerenciador_Grafico
{
private:
    sf::RenderWindow *janela;
    sf::View camera;
    std::map<const std::string, sf::Texture *> texturas;
    sf::Text texto;
    sf::Font fonte;
    char letra;
    bool eventoTexto;

public:
    Gerenciador_Grafico();
    ~Gerenciador_Grafico();
    void mostrar() const;
    void limpar();
    void desenhar(const std::string &caminho, const Vetor2D<float> posicao, const Vetor2D<float> tamanho);
    bool carregarTextura(const std::string &caminho);
    void centralizar(const Vetor2F centro);
    sf::RenderWindow *getJanela() const;
    void eventosJanela();
    void desenharTexto(std::string text, Vetor2F pos);
    char getLetra();
    const bool getEventoTexto() const;
};

#endif