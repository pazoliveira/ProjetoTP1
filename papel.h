#ifndef PAPEL_H_INCLUDED
#define PAPEL_H_INCLUDED
#include <string>

using namespace std;

class Papel {

private:
    string papel;
    bool validarPapel(string valor);

public:
    void setPapel(string valor);
    string getPapel() const;
};


inline string Papel::getPapel() const {
    return papel;
};


#endif // PAPEL_H_INCLUDED
