#ifndef NOME_H_INCLUDED
#define NOME_H_INCLUDED
#include <string>

using namespace std;

class Nome {

private:
    string nome;
    void validarNome(string valor);

public:
    void setNome(string valor);
    string getNome() const;
};

inline string Nome::getNome() const {
    return nome;
};
#endif // NOME_H_INCLUDED
