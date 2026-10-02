#ifndef TEXTO_H_INCLUDED
#define TEXTO_H_INCLUDED
#include <string>

using namespace std;

class Texto {

private:
    string texto;
    void validarTexto(string valor);

public:
    void setTexto(string valor);
    string getTexto() const;
};


inline string Texto::getTexto() const {
    return texto;
}

#endif // TEXTO_H_INCLUDED
