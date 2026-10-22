#ifndef TEXTO_H_INCLUDED
#define TEXTO_H_INCLUDED
#include <string>

using namespace std;

/**
 * @brief Representa o domínio Texto no sistema Kanban.
 * @details Valida e armazena o valor correspondente às regras de negócio.
 */
class Texto {

private:
    string texto;
    void validarTexto(string valor);

public:
    /**
     * @brief Define um novo valor após a validação.
     * @param valor Dado de entrada a ser validado.
     * @throw std::invalid_argument Se o valor for inválido.
     */
    void setTexto(string valor);
    /**
     * @brief Retorna o valor atualmente armazenado.
     * @return String contendo o valor.
     */
    string getTexto() const;
};


inline string Texto::getTexto() const {
    return texto;
}

#endif // TEXTO_H_INCLUDED
