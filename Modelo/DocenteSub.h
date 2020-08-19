#include "./Docente.h"
using namespace std;

class DocenteSub : public Docente{
    private:
        int cargaHoraria;
    public:
        ~DocenteSub(){}

        DocenteSub(int _cargaHoraria, string codigo, string nome, string _nivel, string titulacao, double _salario):
        Docente(codigo, nome, titulacao){
                cargaHoraria=_cargaHoraria;
                nivel=_nivel;
                salario=calculaSalario(_salario);
        }

        double calculaSalario(double _salario){
            return (nivel=="S1") ? _salario+_salario*0.05 : _salario+_salario*0.1;
        }
};