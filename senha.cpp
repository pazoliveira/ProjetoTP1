#include "senha.h"
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool temNumero = false;
bool temLetra = false;


void Senha::validarSenha(string valor){
    if (valor.lenght() != 5){
        throw invalid_argument("Senha Inválida. A senha deve ter exatamente 5 números");
    }

    // Percorre toda a string
    for (int i;i < valor.lenght(senha);i++ ){
        char letra = senha[i];
        // Verifica se tem letra
        if (isalpha(letra)){
            temLetra = true;
        } else if (isdigit(letra)){
            temNumero = true;
        }
    if (temNumero  temLetra){

    }

}

void Senha::setValor(string valor) {
    validarSenha(valor);
    this->valor = valor;
}

/*
void Senha::validarSenha(string valor) {
    if(valor.size() != 5 || temLetra(valor) == false || temNumero(valor) == false)
        throw invalid_argument("Erro de argumento. Tente novamente!");
};

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
*/