
#include "../Modelo/Universidade.h"


int main(){
    Universidade* x = new Universidade("Unesp");
    Funcionario* y = new Tecnico();
    y->setSalarioBase(500);
    x->AddDepartamento("Computacao", "22444000");
    x->InfoDepartamento("2244400");
    x->AddDepartamento("Matematica", "22444001");
    x->InfoDepartamentos();
    x->AddTecnico("Lorena","5501", "T1", "Laboratorio","22444001");
    x->AddDocenteEfetivo("Ricardo", "6666", "D2","Doutor", "Exatas", "22444001");

    x->Geral();
}