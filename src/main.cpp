#include <iostream>
#include "domain/headers/senha.h"
#include "domain/headers/prioridade.h"
#include "domain/headers/estado.h"
#include "domain/headers/limite.h"
#include <limits>
#include "domain/headers/nome.h"
#include "domain/headers/timestamp.h"

using namespace std;

int main()
{
    string valor;
    Senha senha;

    cout << "Cadastramento de Senha." << endl;
    cout << endl;
    cout << "Atencao!" << endl;
    cout << "A senha deve ter tamanho igual a 5 caracteres." << endl;
    cout << "A senha deve conter pelo menos uma letra e um numero." << endl;

    cout << endl;
    cout << "Digite sua senha: ";
    cin >> valor;

    try {
        senha.setSenha(valor); // Corrigido aqui
        cout << "Senha cadastrada com sucesso." << endl;
    }
    catch (invalid_argument &e) {
        cout << "Excecao: " << e.what() << endl;
    }

    Prioridade prioridade;
    string s;

    cout << endl;
    cout << "Prioridade [ALTA, MEDIA ou BAIXA]: ";
    cin >> s;

    prioridade.setPrioridade(s);
    cout << prioridade.getPrioridade() << endl;

    Estado estado;
    string s2;

    cout << endl;
    cout << "Estado [A FAZER, FAZENDO ou FEITO]: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, s2);

    estado.setEstado(s2);
    cout << estado.getEstado() << endl;

    Limite limite;
    int s3;

    cout << endl;
    cout << "Limite [digite um valor entre 1 e 25]: ";
    cin >> s3;

    limite.setLimite(s3);
    cout << limite.getLimite() << endl;

    Nome nome;
    string s4;

    cout << endl;
    cout << "Digite nome: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, s4);

    try {
        nome.setNome(s4);
        cout << nome.getNome() << endl;
    }
    catch (invalid_argument &e) {
        cout << "Excecao: " << e.what() << endl;
    }

    Timestamp t;

    t.setDataHora("30-02-2026-16:35"); // Corrigido aqui

    cout << "Timestamp: " << t.getDataHora() << endl; // Corrigido aqui

    return 0;
}