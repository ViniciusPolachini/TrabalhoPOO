#ifndef CONTROLER_H
#define CONTROLER_H
#include "universidade.h"

class controler{
    private:
        Universidade* Unesp = new Universidade("Unesp");
    public:
        controler(){}
        void AddDepartamento(string nome, string codigo){
            Unesp->AddDepartamento(nome, codigo);
        }
        void AddDocenteEfetivo(string nome, string codigo, string nivel, string titulo, string dep, string area){
            Unesp->AddDocenteEfetivo(nome, codigo, nivel, titulo, area, dep);
        }
        void AddDocenteSub(string nome, string codigo, string nivel, string titulo, string dep, int carga){
            Unesp->AddDocenteSub(nome,codigo,nivel,titulo,carga,dep);
        }
        void AddTecnico(string nome, string codigo, string nivel, string funcao, string dep){
            Unesp->AddTecnico(nome,codigo,nivel,funcao,dep);
        }
        string Tecnico(){
            Unesp->InfoTecnicos();
        }
};



#endif // CONTROLER_H
