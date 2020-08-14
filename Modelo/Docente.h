#include <iostream>
#include <string>
#include "Funcionario.h"
using namespace std;

class Docente : public Funcionario{
    protected:
        string Titulacao;
};