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
        string Geral(){
            return Unesp->Geral();
        }
        string Funcionarios(){
            return Unesp->InfoFuncionarios();
        }
        string Tecnicos(){
            return Unesp->InfoTecnicos();
        }
        string Subs(){
            return Unesp->InfoSub();
        }
        string Efetivos(){
            return Unesp->InfoEfetivos();
        }
        string Docentes(){
            return Unesp->InfoDocentes();
        }
        string Departamentos(){
            return Unesp->InfoDepartamentos();
        }
        string DepartamentosEmFaixa(double min, double max){
            return Unesp->DepartamentosEmFaixa(min, max);
        }
        string FuncionariosEmFaixa(double min, double max){
            return Unesp->FuncionariosEmFaixa(min, max);
        }
        string FuncionarioCodigo(string codigo){
            return Unesp->InfoFuncionarioCodigo(codigo);
        }
        string FuncionarioNome(string nome){
            return Unesp->InfoFuncionarioNome(nome);
        }
        string DepartamentoCodigo(string codigo){
            return Unesp->InfoDepartamentoCodigo(codigo);
        }
        string DepartamentoNome(string nome){
            return Unesp->InfoDepartamentoNome(nome);
        }
};



#endif // CONTROLER_H
