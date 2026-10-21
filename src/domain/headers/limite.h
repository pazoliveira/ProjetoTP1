#ifndef LIMITE_H_INCLUDED
#define LIMITE_H_INCLUDED

using namespace std;

class Limite {

private:
    int limite ;
    void validarLimite(int valor);

public:
    void setLimite(int valor);
    int getLimite() const;
};


inline int Limite::getLimite() const {
    return limite;
};

#endif // LIMITE_H_INCLUDED
