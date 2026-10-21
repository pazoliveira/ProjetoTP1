#ifndef CARTAOATIVIDADE_H_INCLUDED
#define CARTAOATIVIDADE_H_INCLUDED

#include "domain/headers/identificador.h"
#include "domain/headers/nome.h"
#include "domain/headers/texto.h"
#include "domain/headers/prioridade.h"
#include "domain/headers/estado.h"
#include "domain/headers/tamanho.h"
#include "domain/headers/timestamp.h"

class CartaoAtividade {
private:
    Identificador identificador;
    Nome nome;
    Texto descricao;
    Prioridade prioridade;
    Estado estado;
    Tamanho tamanho;
    Timestamp entrada;
    Timestamp inicio;
    Timestamp termino;

public:
    CartaoAtividade();

    void setIdentificador(Identificador identificador);
    Identificador getIdentificador();

    void setNome(Nome nome);
    Nome getNome();

    void setDescricao(Texto descricao);
    Texto getDescricao();

    void setPrioridade(Prioridade prioridade);
    Prioridade getPrioridade();

    void setEstado(Estado estado);
    Estado getEstado();

    void setTamanho(Tamanho tamanho);
    Tamanho getTamanho();

    void setEntrada(Timestamp entrada);
    Timestamp getEntrada();

    void setInicio(Timestamp inicio);
    Timestamp getInicio();

    void setTermino(Timestamp termino);
    Timestamp getTermino();
};

#endif // CARTAOATIVIDADE_H_INCLUDED
