#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED
#include <string>

using namespace std;

class Email {

private:
    string email;
    bool validar(string valor);

public:
    void setEmail(string valor);
    string getEmail();
};

inline string Email::getEmail() {
    return email;
}

#endif // EMAIL_H_INCLUDED
