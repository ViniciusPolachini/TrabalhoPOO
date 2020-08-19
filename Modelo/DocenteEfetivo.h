
#include "./Docente.h"


class DocenteEfetivo : public Docente{
    private:
        string area;
    public:
        ~DocenteEfetivo(){}

        DocenteEfetivo(string _Area, string codigo, string nome, string _nivel, string titulacao, double _salario):
        Docente(codigo, nome, titulacao){
            area=_Area;
            nivel=_nivel;
            salario=calculaSalario(_salario);
        }

        double calculaSalario(double _salario){
            return (nivel=="D1") ? _salario+_salario*0.05 : ((nivel=="D2") ? _salario+_salario*0.1 : _salario+_salario*0.2); 
        }
};