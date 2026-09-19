#ifndef PRIORIDADE_H_INCLUDED
#define PRIORIDADE_H_INCLUDED
#include <string>

using namespace std;

class Prioridade {

private:
    string prioridade;
    bool validarPrioridade(string valor);

public:
    void setPrioridade(string valor);
    string getPrioridade() const;
};


inline string Prioridade::getPrioridade() const {
    return prioridade;
};

#endif // PRIORIDADE_H_INCLUDED
