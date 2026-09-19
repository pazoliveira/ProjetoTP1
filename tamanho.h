#ifndef TAMANHO_H_INCLUDED
#define TAMANHO_H_INCLUDED
#include <string>

using namespace std;

class Tamanho {

private:
    string tamanho;
    bool validarTamanho(string valor);

public:
    void setTamanho(string valor);
    string getTamanho() const;
};


inline string Tamanho::getTamanho() const {
    return tamanho;
};



#endif // TAMANHO_H_INCLUDED
