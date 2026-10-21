#ifndef PROJETO_H_INCLUDED
#define PROJETO_H_INCLUDED

#include "identificador.h"
#include "nome.h"
#include "texto.h"
#include "timestamp.h"

class Projeto {
private:
    Identificador identificador;
    Nome nome;
    Texto descricao;
    Timestamp inicio;
    Timestamp termino;

public:
    Projeto();

    void setIdentificador(Identificador identificador);
    Identificador getIdentificador();

    void setNome(Nome nome);
    Nome getNome();

    void setDescricao(Texto descricao);
    Texto getDescricao();

    void setInicio(Timestamp inicio);
    Timestamp getInicio();

    void setTermino(Timestamp termino);
    Timestamp getTermino();
};

#endif // PROJETO_H_INCLUDED
