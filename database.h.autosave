
#ifndef DATABASE_H
#define DATABASE_H
#include "./departamento.h"
#define MAXD 20
#define MAXF MAXD*50

class DataBase{
    
    private:
        Departamento* departamentos[MAXD];
        Funcionario* funcionarios[MAXF];
        int contD=0, contF=0;
        
    public:
        DataBase(){
            for(int i=0;i<MAXD; i++) departamentos[i] = nullptr;
            for(int i=0;i<MAXF;i++) funcionarios[i] = nullptr;
        }
        
        void setSalarioBase(double salario){
            funcionarios[0]->setSalarioBase(salario);
        }

        double getSalarioBase(){
            return funcionarios[0]->getSalarioBase();
        }

        void AddDepartamento(Departamento* departamento){
            if(contD<MAXD){
                departamentos[contD] = departamento;
                contD++;
            }
            else delete(departamento);
        }

        void AddFuncionario(Funcionario* funcionario, std::string dep){
            if(contF<MAXF){
                int i=0;
                for(; i<contD; i++){
                    if((departamentos[i]->getNome())==(dep)){
                        funcionarios[contF]=funcionario;
                        contF++;    
                        departamentos[i]->AddFuncionario(funcionario);
                        break;
                    }
                }
            }
        }

        Departamento** Departamentos(){
            return departamentos;
        }

        Funcionario** Funcionarios(){
            return funcionarios;
        }

        Departamento* getDepartamentoCodigo(std::string codigo){
            for(int i=0; i<contD; i++){
                if(departamentos[i]->getCodigo().compare(codigo)){
                    return departamentos[i];
                }
            }
            return nullptr;
        }

        Departamento* getDepartamentoNome(std::string nome){
            for(int i=0; i<contD; i++){
                if((departamentos[i]->getNome()).compare(nome)){
                    return departamentos[i];
                }
            }
            return nullptr;
        }

        Funcionario* getFuncionarioCodigo(std::string codigo){
            for(int i=0; i<contF; i++){
                if(funcionarios[i]->getCodigo().compare(codigo)){
                    return funcionarios[i];
                }
            }
            return nullptr;
        }

        Funcionario* getFuncionarioNome(std::string nome){
            for(int i=0; i<contF; i++){
                if(funcionarios[i]->getNome().compare(nome)){
                    return funcionarios[i];
                }
            }
            return nullptr;
        }

        int NumeroDepartamentos(){
            return contD;
        }

        int NumeroFuncionarios(){
            return contF;
        }
};
#endif
