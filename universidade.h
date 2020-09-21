#pragma once
#include "./database.h"
#include <time.h>

class Universidade{

    private:
        string nome;
        DataBase* database;
        
    public:
        Universidade(string _Nome){
            nome=_Nome;
            database=new DataBase();
        }
        
        string GeraCodigo(int n){
            time_t bTime = time(NULL);
            struct tm* aTime = localtime(&bTime);
            int codigo = 100*(aTime->tm_year + 1900) + n;
            return to_string(codigo);
        }

        void setSalarioBase(double salario){
            database->setSalarioBase(salario);
        }

        string getSalariosBase(){
            return to_string(database->getSalarioBase());
        }

        void AddDepartamento(string Nome){
            string codigo=GeraCodigo(database->NumeroDepartamentos()+1);
            Departamento* departamento=new Departamento(Nome, codigo);
            database->AddDepartamento(departamento);
        }

        void AddDocenteEfetivo(string nome, string nivel, string titulo, string area, string departamento){
            string codigo=GeraCodigo(database->NumeroFuncionarios()+1);
            DocenteEfetivo* docente = new DocenteEfetivo(area,codigo,nome,nivel,titulo);
            database->AddFuncionario(docente, departamento);
        }

        void AddDocenteSub(string nome, string nivel, string titulo, int cargaHoraria, string departamento){
            string codigo=GeraCodigo(database->NumeroFuncionarios()+1);
            DocenteSub* docente = new DocenteSub(cargaHoraria,codigo,nome,nivel,titulo);
            database->AddFuncionario(docente, departamento);
        }

        void AddTecnico(string nome, string nivel, string funcao, string departamento){
            string codigo=GeraCodigo(database->NumeroFuncionarios()+1);
            Tecnico* tecnico = new Tecnico(codigo,nome,nivel,funcao);
            database->AddFuncionario(tecnico, departamento);
        }
        
        string Geral(){
            Departamento** departamentos = database->Departamentos();
            int n=database->NumeroDepartamentos();
            double gastos=0;
            string info="";
            if(n==0) return "Não há departamentos registrados";
            Funcionario**  funcionario;
            for(int i=0; i<n; i++){
                gastos+=departamentos[i]->calculaGastos();
                info+="\n\nDepartamento:"+departamentos[i]->getNome()+"\nFuncionarios:";
                funcionario=departamentos[i]->getFuncionarios();
                int n2 = departamentos[i]->getNFuncionarios();
                if(n2==0) info+="Não há funcionarios";
                else for(int j=0; j<n2; j++) info+="\n"+funcionario[j]->getNome();
            }
            info+="\n\nGastos:"+to_string(gastos);
            return info;
        }

        string InfoFuncionarioCodigo(string codigo){
            Funcionario* funcionario = database->getFuncionarioCodigo(codigo);
            if(funcionario != nullptr){
               return funcionario->Informacoes();
            }
            else{
                return "Registro Inexistente";
            }
        }

        string InfoFuncionarioNome(string nome){
            Funcionario* funcionario = database->getFuncionarioNome(nome);
            if(funcionario != nullptr){
                return funcionario->Informacoes();
            }
            else{
                return "Registro Inexistente";
            }
        }

        string InfoDepartamentoCodigo(string codigo){
            Departamento* departamento = database->getDepartamentoCodigo(codigo);
            if(departamento != nullptr){
               return departamento->Informacoes();
            }
            else{
                return "Registro Inexistente";
            }
        }

        string InfoDepartamentoNome(string nome){
            Departamento* departamento = database->getDepartamentoNome(nome);
            if(departamento != nullptr){
               return departamento->Informacoes();
            }
            else{
                return "Registro Inexistente";
            }
        }

        string InfoDepartamentos(){
            Departamento** departamentos= database->Departamentos();
            int n = database->NumeroDepartamentos();
            if(n==0) return "Não há departamentos registrado";
            string info="";
            for(int i=0; i<n; i++){
                info+=departamentos[i]->Informacoes();
            }
            return info;
        }

        string InfoFuncionarios(){
            Funcionario** funcionarios= database->Funcionarios();
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrado";
            string info="";
            for(int i=0; i<n; i++){
                info+=funcionarios[i]->Informacoes();
            }
            return info;
        }

        string InfoEfetivos(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrados";
            string info="";
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(DocenteEfetivo).name()) info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há docentes efetivos registrados";
            return info;
        }

        string InfoSub(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrados";
            string info="";
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(DocenteSub).name()) info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há docentes substitutos registrados";
            return info;
        }

        string InfoDocentes(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrados";
            string info="";
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()!=typeid(Tecnico).name()) info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há docentes registrados";
            return info;
        }

        string InfoTecnicos(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrados";
            string info="";
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(Tecnico).name()) info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há técnicos registrados";
            return info;
        }

        string DepartamentosEmFaixa(double min, double max){
            Departamento** departamentos= database->Departamentos();
            int n = database->NumeroDepartamentos();
            if(n==0) return "Não há deparamentos registrado";
            string info="";
            for(int i=0; i<n; i++){
                if(departamentos[i]->calculaGastos()<=max && departamentos[i]->calculaGastos()>=min)
                info+=departamentos[i]->Informacoes();
            }
            if(info=="") return "Não há departamentos nesta faixa de gastos";
            return info;
        }

        string FuncionariosEmFaixa(double min, double max){
            Funcionario** funcionarios= database->Funcionarios();
            int n = database->NumeroDepartamentos();
            if(n==0) return "Não há funcionarios registrado";
            string info="";
            for(int i=0; i<n; i++){
                if(funcionarios[i]->calculaSalario()<=max && funcionarios[i]->calculaSalario()>=min)
                info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há funcionarios nesta faixa de gastos";
            return info;
        }
};
