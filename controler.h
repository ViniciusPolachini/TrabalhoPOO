#ifndef CONTROLER_H
#define CONTROLER_H
#include "universidade.h"

class controler{
    private:
        static Universidade* Unesp;
    public:
        controler(){}
        void SetSalarioBase(double salario){
            Unesp->setSalarioBase(salario);
        }
        void AddDepartamento(std::string nome){
            Unesp->AddDepartamento(nome);
        }
        void AddDocenteEfetivo(std::string nome, std::string nivel, std::string titulo, std::string dep, std::string area){
            Unesp->AddDocenteEfetivo(nome, nivel, titulo, area, dep);
        }
        void AddDocenteSub(std::string nome, std::string nivel, std::string titulo, std::string dep, int carga){
            Unesp->AddDocenteSub(nome,nivel,titulo,carga,dep);
        }
        void AddTecnico(std::string nome, std::string nivel, std::string funcao, std::string dep){
            Unesp->AddTecnico(nome,nivel,funcao,dep);
        }
        std::string Geral(){
            return Unesp->Geral();
        }
        std::string Funcionarios(){
            return Unesp->InfoFuncionarios();
        }
        std::string Tecnicos(){
            return Unesp->InfoTecnicos();
        }
        std::string Subs(){
            return Unesp->InfoSub();
        }
        std::string Efetivos(){
            return Unesp->InfoEfetivos();
        }
        std::string Docentes(){
            return Unesp->InfoDocentes();
        }
        std::string Departamentos(){
            return Unesp->InfoDepartamentos();
        }
        std::string DepartamentosEmFaixa(double min, double max){
            return Unesp->DepartamentosEmFaixa(min, max);
        }
        std::string FuncionariosEmFaixa(double min, double max){
            return Unesp->FuncionariosEmFaixa(min, max);
        }
        std::string FuncionarioCodigo(std::string codigo){
            return Unesp->InfoFuncionarioCodigo(codigo);
        }
        std::string FuncionarioNome(std::string nome){
            return Unesp->InfoFuncionarioNome(nome);
        }
        std::string DepartamentoCodigo(std::string codigo){
            return Unesp->InfoDepartamentoCodigo(codigo);
        }
        std::string DepartamentoNome(std::string nome){
            return Unesp->InfoDepartamentoNome(nome);
        }
        std::string getSalarioBase(){
            return Unesp->getSalariosBase();
        }
};
Universidade* controler::Unesp = new Universidade("Unesp");
#endif
