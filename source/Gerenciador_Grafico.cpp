#include"Gerenciador_Grafico.hpp"

#include<iostream>

Gerenciador_Grafico::Gerenciador_Grafico():
    janela(new sf::RenderWindow(sf::VideoMode(800,600),"Jogo")),
    camera(sf::Vector2f(400,300), sf::Vector2f(600,200))
{
    janela->setView(camera);
}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
    delete janela;

    std::map<const std::string , sf::Texture*>::iterator it;

    for(it=texturas.begin(); it!=texturas.end(); it++)
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

void Gerenciador_Grafico::desenhar(const std::string& caminho, const Vetor2F posicao, const Vetor2F tamanho)
{
    if(texturas.count(caminho)==0)
    {
        std::cout <<"Não carregou textura" << std::endl;
        exit(1);
    }
    sf::Texture* text= texturas[caminho];

    sf::Sprite sprite;

    sprite.setOrigin(tamanho.x/2, tamanho.y/2);
  
    sprite.setTexture(*text);

    sprite.setPosition(posicao.x, posicao.y);

    janela->draw(sprite);

}


