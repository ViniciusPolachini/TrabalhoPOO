#pragma once
#include "./database.h"

class Universidade{

    private:
        string nome;
        DataBase* database;
        
    public:
        Universidade(string _Nome){
            nome=_Nome;
            database=new DataBase();
        }
        
        void AddDepartamento(string nome, string codigo){
            Departamento* departamento = new Departamento(nome, codigo);
            database->AddDepartamento(departamento);
        }

        void AddDocenteEfetivo(string nome, string codigo, string nivel, string titulo, string area, string departamento){
            DocenteEfetivo* docente = new DocenteEfetivo(area,codigo,nome,nivel,titulo);
            database->AddFuncionario(docente, departamento);
        }

        void AddDocenteSub(string nome, string codigo, string nivel, string titulo, int cargaHoraria, string departamento){
            DocenteSub* docente = new DocenteSub(cargaHoraria,codigo,nome,nivel,titulo);
            database->AddFuncionario(docente, departamento);
        }

        void AddTecnico(string nome, string codigo, string nivel, string funcao, string departamento){
            Tecnico* tecnico = new Tecnico(codigo,nome,nivel,funcao);
            database->AddFuncionario(tecnico, departamento);
        }
        
        void Geral(){
            Departamento** departamentos = database->Departamentos();
            int n=database->NumeroDepartamentos();
            Funcionario**  funcionario;
            for(int i=0; i<n; i++){
                departamentos[i]->Informacoes();
                funcionario=departamentos[i]->getFuncionarios();
                int n2 = departamentos[i]->getNFuncionarios();
                cout<<"\n[Funcionarios]\n";
                for(int j=0; j<n2; j++) funcionario[j]->Informacoes();
            }
        }

        void InfoFuncionarioCodigo(string codigo){
            Funcionario* funcionario = database->getFuncionarioCodigo(codigo);
            if(funcionario != nullptr){
                funcionario->Informacoes();
            }
            else{
                cout << "Inexistente";
            }
        }

        void InfoFuncionarioNome(string nome){
            Funcionario* funcionario = database->getFuncionarioNome(nome);
            if(funcionario != nullptr){
                funcionario->Informacoes();
            }
            else{
                cout<<"Inexistente";
            }
        }

        string InfoDepartamento(string codigo){
            Departamento* departamento = database->getDepartamento(codigo);
            if(departamento != nullptr){
               return departamento->Informacoes();
            }
            else{
                return "Inexistente";
            }
        }

        void InfoDepartamentos(){
            Departamento** departamentos= database->Departamentos();
            int n = database->NumeroDepartamentos();
            for(int i=0; i<n; i++){
                departamentos[i]->Informacoes();
            }
        }

        void InfoFuncionarios(){
            Funcionario** funcionarios= database->Funcionarios();
            int n = database->NumeroFuncionarios();
            for(int i=0; i<n; i++){
                funcionarios[i]->Informacoes();
            }
        }

        void InfoEfetivos(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(DocenteEfetivo).name()) 
                funcionarios[i]->Informacoes();
            }
        }

        void InfoSub(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(DocenteSub).name()) 
                funcionarios[i]->Informacoes();
            }
        }

        void InfoTecnicos(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(Tecnico).name()) 
                funcionarios[i]->Informacoes();
            }
        }

        void DepartamentosEmFaixa(double min, double max){
            Departamento** departamentos= database->Departamentos();
            int n = database->NumeroDepartamentos();
            for(int i=0; i<n; i++){
                if(departamentos[i]->calculaGastos()<=max && departamentos[i]->calculaGastos()>=min)
                departamentos[i]->Informacoes();
            }
        }

        void FuncionariosEmFaixa(double min, double max){
            Funcionario** funcionarios= database->Funcionarios();
            int n = database->NumeroDepartamentos();
            for(int i=0; i<n; i++){
                if(funcionarios[i]->calculaSalario()<=max && funcionarios[i]->calculaSalario()>=min)
                funcionarios[i]->Informacoes();
            }
        }
};
