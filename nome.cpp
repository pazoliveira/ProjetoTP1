#include "nome.h"
#include <string>
#include <stdexcept>

using namespace std;

void Nome::validarNome(string valor) {

    if (valor.empty() || valor.size() > 15 || valor.front() == ' ' || valor.back() == ' ') {
       throw invalid_argument("Erro de argumento. Tente novamente!");
}

};
void Nome::setNome(string valor) {
    validarNome(valor);
    this->nome = valor;

};
