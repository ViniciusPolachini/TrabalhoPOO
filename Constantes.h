#ifndef CONSTANTES_H
#define CONSTANTES_H
#include <string>

class Constantes{
    public:
    static double TabelaDeSalarios(std::string nivel){
       switch(nivel[0]){
       case 'T': return nivel[1]=='1' ? 0.1:0.2; break;
       case 'D': return nivel[1]=='1' ? 0.05:(nivel[1]=='2' ? 0.1:0.2); break;
       case 'S': return nivel[1]=='1' ? 0.05:0.1;
       }
    }
};

#endif // CONSTANTES_H
