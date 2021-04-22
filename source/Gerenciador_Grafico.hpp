#ifndef _GERENCIADOR_GRAFICO_HPP_
#define _GERENCIADOR_GRAFICO_HPP_

#include <SFML/Graphics.hpp>

#include <map>
#include <string>

#include "Vetor2D.hpp"

class Gerenciador_Grafico
{
private:
    sf::RenderWindow *janela;
    sf::View camera;
    std::map<const std::string, sf::Texture *> texturas;

public:
    Gerenciador_Grafico();
    ~Gerenciador_Grafico();
    void mostrar() const;
    void limpar();
    void desenhar(const std::string &caminho, const Vetor2D<float> posicao, const Vetor2D<float> tamanho);
    bool carregarTextura(const std::string &caminho);
    void centralizar(const Vetor2D<float> centro);
    sf::RenderWindow *getJanela() const;
};

#endif