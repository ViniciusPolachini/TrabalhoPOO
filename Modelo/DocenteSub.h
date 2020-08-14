#include <iostream>
#include <string>
#include "Docente.h"
using namespace std;

class DocenteSub : public Docente{
    private:
        int cargaHoraria;
    public:
        double calculaSalario(){
            return (nivel=="S1") ? salario*0.05 : salario*0.1;
        }
}