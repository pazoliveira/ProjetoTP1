#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>


using namespace std;

class EMAIL{

private:
    string email;
    bool validar(string);

public:
    string setEmail(string);
    string getEmail();
};

inline string EMAIL::getEmail(){
        return email;
};



#endif // DOMINIOS_H_INCLUDED
