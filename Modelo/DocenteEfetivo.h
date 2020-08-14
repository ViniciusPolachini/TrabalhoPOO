#include <iostream>
#include <string>
#include "./Docente.h"
using namespace std;

class DocenteEfetivo : public Docente{
    private:
        string area;
    public:
        double calculaSalario(){
            return (nivel=="D1") ? salario*0.05 : ((nivel=="D2") ? salario*0.1 : salario*0.2); 
        }
};