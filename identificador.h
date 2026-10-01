#ifndef IDENTIFICADOR_H_INCLUDED
#define IDENTIFICADOR_H_INCLUDED
#include <string>

using namespace std;

class Identificador {
private:
    string identificador;
    void validarIdentificador (string);
public:
    void setIdentificador(string);
    string getIdentificador() const;

};

inline string Identificador::getIdentificador() const {
    return identificador;
};

#endif // IDENTIFICADOR_H_INCLUDED
