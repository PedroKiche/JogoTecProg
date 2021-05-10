#ifndef _RELOGIO_H_
#define _RELOGIO_H_

#include <SFML/Graphics.hpp>
namespace bibliotecaGrafica
{

    class Relogio
    {
    private:
        sf::Clock relogio;

    public:
        Relogio();
        ~Relogio();
        void restartar();
        float tempoDecorrido() const;
    };

}

#endif