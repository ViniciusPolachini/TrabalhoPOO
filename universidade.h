#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H
#include "./database.h"
#include <time.h>

class Universidade{

    private:
        std::string nome;
        DataBase* database;
        
    public:
        Universidade(std::string _Nome){
            nome=_Nome;
            database=new DataBase();
        }
        
        std::string GeraCodigo(int n){
            time_t bTime = time(NULL);
            struct tm* aTime = localtime(&bTime);
            int codigo = 100*(aTime->tm_year + 1900) + n;
            return std::to_string(codigo);
        }

        void setSalarioBase(double salario){
            database->setSalarioBase(salario);
        }

        std::string getSalariosBase(){
            return std::to_string(database->getSalarioBase());
        }

        void AddDepartamento(std::string Nome){
            std::string codigo=GeraCodigo(database->NumeroDepartamentos()+1);
            Departamento* departamento=new Departamento(Nome, codigo);
            database->AddDepartamento(departamento);
        }

        void AddDocenteEfetivo(std::string nome, std::string nivel, std::string titulo, std::string area, std::string departamento){
            std::string codigo=GeraCodigo(database->NumeroFuncionarios()+1);
            DocenteEfetivo* docente = new DocenteEfetivo(area,codigo,nome,nivel,titulo);
            database->AddFuncionario(docente, departamento);
        }

        void AddDocenteSub(std::string nome, std::string nivel, std::string titulo, int cargaHoraria, std::string departamento){
            std::string codigo=GeraCodigo(database->NumeroFuncionarios()+1);
            DocenteSub* docente = new DocenteSub(cargaHoraria,codigo,nome,nivel,titulo);
            database->AddFuncionario(docente, departamento);
        }

        void AddTecnico(std::string nome, std::string nivel, std::string funcao, std::string departamento){
            std::string codigo=GeraCodigo(database->NumeroFuncionarios()+1);
            Tecnico* tecnico = new Tecnico(codigo,nome,nivel,funcao);
            database->AddFuncionario(tecnico, departamento);
        }
        
        std::string Geral(){
            Departamento** departamentos = database->Departamentos();
            int n=database->NumeroDepartamentos();
            double gastos=0;
            std::string info="";
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
            info+="\n\nGastos:"+std::to_string(gastos);
            return info;
        }

        std::string InfoFuncionarioCodigo(std::string codigo){
            Funcionario* funcionario = database->getFuncionarioCodigo(codigo);
            if(funcionario != nullptr){
               return funcionario->Informacoes();
            }
            else{
                return "Registro Inexistente";
            }
        }

        std::string InfoFuncionarioNome(std::string nome){
            Funcionario* funcionario = database->getFuncionarioNome(nome);
            if(funcionario != nullptr){
                return funcionario->Informacoes();
            }
            else{
                return "Registro Inexistente";
            }
        }

        std::string InfoDepartamentoCodigo(std::string codigo){
            Departamento* departamento = database->getDepartamentoCodigo(codigo);
            if(departamento != nullptr){
               return departamento->Informacoes();
            }
            else{
                return "Registro Inexistente";
            }
        }

        std::string InfoDepartamentoNome(std::string nome){
            Departamento* departamento = database->getDepartamentoNome(nome);
            if(departamento != nullptr){
               return departamento->Informacoes();
            }
            else{
                return "Registro Inexistente";
            }
        }

        std::string InfoDepartamentos(){
            Departamento** departamentos= database->Departamentos();
            int n = database->NumeroDepartamentos();
            if(n==0) return "Não há departamentos registrado";
            std::string info="";
            for(int i=0; i<n; i++){
                info+=departamentos[i]->Informacoes();
            }
            return info;
        }

        std::string InfoFuncionarios(){
            Funcionario** funcionarios= database->Funcionarios();
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrado";
            std::string info="";
            for(int i=0; i<n; i++){
                info+=funcionarios[i]->Informacoes();
            }
            return info;
        }

        std::string InfoEfetivos(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrados";
            std::string info="";
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(DocenteEfetivo).name()) info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há docentes efetivos registrados";
            return info;
        }

        std::string InfoSub(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrados";
            std::string info="";
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(DocenteSub).name()) info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há docentes substitutos registrados";
            return info;
        }

        std::string InfoDocentes(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrados";
            std::string info="";
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()!=typeid(Tecnico).name()) info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há docentes registrados";
            return info;
        }

        std::string InfoTecnicos(){
            Funcionario** funcionarios= (database->Funcionarios());
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrados";
            std::string info="";
            for(int i=0; i<n; i++){
                if(typeid(*funcionarios[i]).name()==typeid(Tecnico).name()) info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há técnicos registrados";
            return info;
        }

        std::string DepartamentosEmFaixa(double min, double max){
            Departamento** departamentos= database->Departamentos();
            int n = database->NumeroDepartamentos();
            if(n==0) return "Não há deparamentos registrado";
            double valor;
            std::string info="";
            for(int i=0; i<n; i++){
                valor = departamentos[i]->calculaGastos();
                if(valor<=max && valor>=min)
                info+=departamentos[i]->Informacoes();
            }
            if(info=="") return "Não há departamentos nesta faixa de gastos";
            return info;
        }

        std::string FuncionariosEmFaixa(double min, double max){
            Funcionario** funcionarios= database->Funcionarios();
            int n = database->NumeroFuncionarios();
            if(n==0) return "Não há funcionarios registrado";
            std::string info="";
            double valor;
            for(int i=0; i<n; i++){
                valor=funcionarios[i]->calculaSalario();
                if(valor<=max && valor>=min)
                info+=funcionarios[i]->Informacoes();
            }
            if(info=="") return "Não há funcionarios nesta faixa de gastos";
            return info;
        }

        Funcionario* GetFuncionario(int n){
            Funcionario* funcionario = database->Funcionarios()[n-1];
            return funcionario;
        }
        Departamento* GetDepartamento(int n){
            Departamento* departamento = database->Departamentos()[n-1];
            return departamento;
        }

};
#endif
