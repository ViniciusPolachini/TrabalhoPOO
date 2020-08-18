#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Instrumento{//abstrata
    protected:
        string Marca, Nome;
        float Preco;
         static int cont;
    public:
        Instrumento(string _Marca, string _Nome, float _Preco){
            Marca=_Marca;
            Nome=_Nome;
            Preco=_Preco;
        }
        virtual float Promocao()=0;
        virtual void Relatorio()=0;
};

class InstrumentoDeCorda : public Instrumento{
    private:
        int Cordas;
    public:
        InstrumentoDeCorda(string _Marca, string _Nome, float _Preco, int _Cordas):Instrumento(_Marca,_Nome,_Preco){
            Cordas=_Cordas;
        }
        ~InstrumentoDeCorda(){}
        float Promocao(){
            return Preco-Preco*0.1;
        }
        void Relatorio(){
            cout <<"\n\n[Instrumento de corda]\nMarca:" << Marca << "\nNome:" << Nome << "\nCordas:"<< Cordas<<"\nPreco:" << Promocao();
        }
};

int main(){
    unique_ptr<InstrumentoDeCorda> Y(new InstrumentoDeCorda("Legal", "D+", 599.99, 4));
    unique_ptr<InstrumentoDeCorda> Z(new InstrumentoDeCorda("Legal", "D+", 599.99, 4));
    Y->Relatorio();
    Z->Relatorio();
    Y->~InstrumentoDeCorda();//Delete
    
}