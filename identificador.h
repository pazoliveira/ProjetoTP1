#ifndef IDENTIFICADOR_H_INCLUDED
#define IDENTIFICADOR_H_INCLUDED


using namespace std;

class Identificador {
private:
    string identificador;
    bool validarIdentificador (string);
public:
    void setIdentificador(string);
    string getIdentificador() const;

}

inline string Identificador::getIdentificador() const {
    return identificador;
};

#endif // IDENTIFICADOR_H_INCLUDED
