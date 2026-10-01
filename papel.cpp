#include "papel.h"
#include <string>

using namespace std;

bool Papel::validarPapel(string valor) {

    if (valor == "Gestor" || valor == "Desenvolvedor") {
           return true;
        }
    else {
        return false;
        };
}

void Papel::setPapel(string valor) {
    if (validarPapel(valor)) {
        papel = valor;
    }
};
