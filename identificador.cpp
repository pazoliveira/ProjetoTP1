#include "identificador.h"

bool Identificador::validarIdentificador(string valor) {

    if (valor.length() != 6) {
        return false;
    }

    // Os 3 primeiros caracteres devem ser letras
    for (int i = 0; i < 3; i++) {
        if (!((valor[i] >= 'a' && valor[i] <= 'z') || (valor[i] >= 'A' && valor[i] <= 'Z'))) {
            return false;
        }
    }

    // Os 3 últimos caracteres devem ser números
    for (int i = 3; i < 6; i++) {
        if (!(valor[i] >= '0' && valor[i] <= '9')) {
            return false;
        }
    }

    return true;
}

void Identificador::setIdentificador(string valor) {

    if (validarIdentificador(valor)) {
        identificador = valor;
    }
}

