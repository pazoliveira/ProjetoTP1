#ifndef ESTADO_H_INCLUDED
#define ESTADO_H_INCLUDED
#include <string>

using namespace std;

class Estado {

private:
    string estado;
    void validarEstado(string valor);

public:
    void setEstado(string valor);
    string getEstado() const;
};


inline string Estado::getEstado() const {
    return estado;
};

#endif // ESTADO_H_INCLUDED
