#include "senha.h"
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool Senha::temNumero(string texto) {
    for (char c : texto) {
        if (isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool Senha::temLetra(string texto) {
    for (char c : texto) {
        if (isalpha(c)) {
            return true;
        }
    }
    return false;
}

void Senha::validarSenha(string valor) {
    if(valor.size() != 5 || temLetra(valor) == false || temNumero(valor) == false)
        throw invalid_argument("Erro de argumento. Tente novamente!");
};

void Senha::setValor(string valor) {
    validarSenha(valor);
    this->valor = valor;
}
