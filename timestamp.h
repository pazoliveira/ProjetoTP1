#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class Timestamp {
private:
    string timestamp;
    void validarTimestamp(string valor);

public:
    void setTimestamp(string valor);
    string getTimestamp();
};



#endif // TIMESTAMP_H_INCLUDED
