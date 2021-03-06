#include "Gerenciador_Grafico.h"

#include <iostream>

namespace bibliotecaGrafica
{

    Gerenciador_Grafico::Gerenciador_Grafico() : janela(new sf::RenderWindow(sf::VideoMode(800, 600), "Jogo")),
                                                 camera(sf::Vector2f(400, 300), sf::Vector2f(800, 600))
    {
        janela->setView(camera);
        if (!fonte.loadFromFile("../JogoTecProg/Fonts/berkshireswash-regular.ttf"))
        {
            std::cout << "erro" << std::endl;
        }
        texto.setFont(fonte);
        texto.setCharacterSize(24);
        texto.setStyle(sf::Text::Bold);
        letra = '0';
        eventoTexto = false;
    }

    Gerenciador_Grafico::~Gerenciador_Grafico()
    {
        delete janela;

        std::map<const std::string, sf::Texture *>::iterator it;

        for (it = texturas.begin(); it != texturas.end(); it++)
        {
            texturas.erase(it);
        }
        texturas.clear();
    }

    void Gerenciador_Grafico::mostrar() const
    {
        janela->display();
    }

    void Gerenciador_Grafico::limpar()
    {
        janela->clear(sf::Color::Black);
    }

    void Gerenciador_Grafico::desenhar(const std::string &caminho, const Vetor2D<float> posicao, const Vetor2D<float> tamanho)
    {
        if (texturas.count(caminho) == 0)
        {
            std::cout << "Não carregou textura" << std::endl;
            exit(1);
        }
        sf::Texture *text = texturas[caminho];

        sf::Sprite sprite;

        sprite.setOrigin(tamanho.x / 2, tamanho.y / 2);

        sprite.setTexture(*text);

        sprite.setPosition(posicao.x, posicao.y);

        janela->draw(sprite);
    }

    bool Gerenciador_Grafico::carregarTextura(const std::string &caminho)
    {
        if (texturas.count(caminho) == 1)
            return true;
        else
        {
            sf::Texture *textura = new sf::Texture();
            if (!textura->loadFromFile(caminho))
            {
                std::cout << "Imagem em " << caminho << "nao encontrada" << std::endl;
                exit(1);
            }
            texturas.insert(std::pair<const std::string, sf::Texture *>(caminho, textura));
            return true;
        }
    }

    void Gerenciador_Grafico::centralizar(const Vetor2F centro)
    {
        camera.setCenter(sf::Vector2f(centro.x, centro.y));
        janela->setView(camera);
    }

    sf::RenderWindow *Gerenciador_Grafico::getJanela() const
    {
        return janela;
    }

    void Gerenciador_Grafico::eventosJanela()
    {
        sf::Event evento;
        while (janela->pollEvent(evento))
        {
            switch (evento.type)
            {
            case sf::Event::Closed:
                janela->close();
                break;

            case sf::Event::TextEntered:
                if (evento.text.unicode < 123 && evento.text.unicode > 64 && !eventoTexto)
                {
                    letra = evento.text.unicode;
                    eventoTexto = true;
                }
                break;
            default:
                break;
            }
        }
    }

    void Gerenciador_Grafico::desenharTexto(std::string text, Vetor2F pos)
    {
        texto.setString(text);
        texto.setPosition(pos.x, pos.y);
        janela->draw(texto);
    }

    char Gerenciador_Grafico::getLetra()
    {
        eventoTexto = false;
        return letra;
    }

    const bool Gerenciador_Grafico::getEventoTexto() const
    {
        return eventoTexto;
    }

}