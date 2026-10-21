#ifndef QUADRO_H_INCLUDED
#define QUADRO_H_INCLUDED


#include "domain/headers/identificador.h"
#include "domain/headers/nome.h"
#include "domain/headers/limite.h"

class Quadro {
private:
    Identificador identificador;
    Nome nome;
    Limite limite;

public:
    Quadro();

    void setIdentificador(Identificador identificador);
    Identificador getIdentificador();

    void setNome(Nome nome);
    Nome getNome();

    void setLimite(Limite limite);
    Limite getLimite();
};

#endif // QUADRO_H_INCLUDED
