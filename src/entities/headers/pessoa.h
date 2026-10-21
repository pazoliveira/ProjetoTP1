#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include "email.h"
#include "nome.h"
#include "senha.h"
#include "papel.h"

class Pessoa {
private:
    Email email;
    Nome nome;
    Senha senha;
    Papel papel;

public:
    Pessoa();

    void setEmail(Email email);
    Email getEmail();

    void setNome(Nome nome);
    Nome getNome();

    void setSenha(Senha senha);
    Senha getSenha();

    void setPapel(Papel papel);
    Papel getPapel();
};


#endif // PESSOA_H_INCLUDED
