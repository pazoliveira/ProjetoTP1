#include "estado.h"
#include <string>


bool Estado::validarEstado(string valor) {

    if (valor == "A Fazer" || valor == "a fazer" || valor == "A fazer" || valor == "AFazer" || valor == "afazer" || valor == "Afazer"|| valor == "Fazendo" || valor == "fazendo" || valor == "Feito" || valor == "feito") {
           return true;
        }
    else {
        return false;
        };
}

void Estado::setEstado(std::string valor) {
    if (validarEstado(valor)) {

    if (valor == "A Fazer" || valor == "a fazer" || valor == "A fazer" || valor == "AFazer" || valor == "afazer" || valor == "Afazer") {
        valor = "A FAZER";
    }
    else if (valor == "Fazendo" || valor == "fazendo"){
                valor = "FAZENDO";
    }
    else if (valor == "Feito" || valor == "feito") {
                valor = "FEITO";
    }

    estado = valor;
    }
};
