#include "Relogio.h"

namespace bibliotecaGrafica
{

    Relogio::Relogio()
    {
    }

    Relogio::~Relogio()
    {
    }

    void Relogio::restartar()
    {
        relogio.restart();
    }

    float Relogio::tempoDecorrido() const
    {
        return relogio.getElapsedTime().asSeconds();
    }

}