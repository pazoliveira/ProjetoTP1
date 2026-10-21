#include "entities/headers/quadro.h"

Quadro::Quadro() {
}

void Quadro::setIdentificador(Identificador identificador) {
    this->identificador = identificador;
}

Identificador Quadro::getIdentificador() {
    return identificador;
}

void Quadro::setNome(Nome nome) {
    this->nome = nome;
}

Nome Quadro::getNome() {
    return nome;
}

void Quadro::setLimite(Limite limite) {
    this->limite = limite;
}

Limite Quadro::getLimite() {
    return limite;
}
