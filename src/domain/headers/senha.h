#ifndef SENHA_H_INCLUDED
#define SENHA_H_INCLUDED
#include <string>

using namespace std;

class Senha {
private:
    string senha;
    void validarSenha(string);

public:
    void setSenha(string valor);
    string getSenha() const;
};

inline string Senha::getSenha() const {
    return valor;
};


/*
class Senha {
private:
    string valor;
    void validarSenha(string);
    bool temNumero(string);
    bool temLetra(string);


public:
    const static int SENHA_INVALIDA = 12345;
    void setValor(string);
    string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
};
*/

#endif // SENHA_H_INCLUDED
