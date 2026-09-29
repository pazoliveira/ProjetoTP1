#include "timestamp.h"

bool Timestamp::validar(string valor) {

    // Exemplo de formato:
    // DD-MM-AAAA-HH:MM

    if (valor.length() != 16) {
        return false;
    }

    // Verifica os separadores
    if (valor[2] != '-' ||
        valor[5] != '-' ||
        valor[10] != '-' ||
        valor[13] != ':') {
        return false;
    }

    return true;
}

void Timestamp::setTimestamp(string valor) {

    if (validar(valor)) {
        timestamp = valor;
    }
}
string Timestamp::getTimestamp() {
    return timestamp;
}
