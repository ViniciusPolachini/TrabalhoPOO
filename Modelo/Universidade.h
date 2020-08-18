
#include "./Departamento.h"
#define MAX 20

class Universidade{
    private:
        string nome;
        unique_ptr<Departamento> departamentos[];
    public:
        Universidade(string _Nome){
            nome=_Nome;
            departamentos[] =new Departamento[100];
        }

};