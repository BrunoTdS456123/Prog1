#include<iostream>
#include <string>
using namespace std;

class Funcionario{
    public:
    Funcionario(){};
    ~Funcionario(){};
    float addAumento(){
        
       salario = salario*2 ;
        return salario;
    };
      float ganhoAnual(){
        
       anual = salario*12 ;
        return anual;
    };
    void exibeDados(){
        std::cout << "O Funcionario " << nome << "de recebe um salario de:R$" << getSalario() ;  
       
    };
    
    void setnome(std::string nome_){
        nome = nome_ ;
    };
    void setcargo(int cargo_){
        cargo = cargo_ ;
    }; 
    void setsalario(float salario_){
        salario = salario_ ;
    };
    
      float getSalario(){               
            return salario;
        }
       
   protected:
        
        std::string nome;
        int cargo ;
        float salario , anual;
        
        
};

class Assistente : public Funcionario {
     public:
    Assistente(){};
    ~Assistente(){};
    void setmatricula(int matricula_){
        matricula = matricula_ ;
    };
    float getmatricula(){               
            return matricula;
            }
    void exibeDados(){
        std::cout << "O Funcionario " << nome << "de recebe um salario de:R$" << getSalario() ;  
        std::cout << "de matricula:" << matricula  ;  
    }

     float getanual(){               
        return anual;
    }
    protected:
    int matricula ; 
    int cargo   ;
};
    class Tecnico : public Assistente {
     public:
    Tecnico(){};
    ~Tecnico(){};
    
    void ganhoAnual(){
         salario= bonusSalarial + salario ;
         anual= salario*12 ;
    }
    void setbonus(float bonusSalarial_){
        bonusSalarial = bonusSalarial_ ;
         };
        
    
    protected:
    float bonusSalarial ;
    
};
class administrativo : public Assistente {
     public:
    administrativo(){};
    ~administrativo(){};
    void ganhoAnual(){
         salario = salario + adicional;
         anual = salario *12 ;
    }
    void setturno(std::string turno_){
        turno = turno_ ;
         };
          
    
    protected:
    std::string turno;
    float adicional ;
};


int main(){
    Funcionario conta;
    Assistente objAssist;
    Tecnico objTec ; 
    administrativo objAdmin;
    std::string nome;
    float salario ;
    int matricula ; 
    int cargo ;
    float bonusSalarial ;
    float adicional ;
    std::string turno;

    std::cout <<"de a seu nome:";
    std::cin >> nome ;
    std::cout << "de o seu salario :";
    std::cin >> salario ;
    std::cout << "matricula :";
    std::cin >> matricula ;
    std::cout << "cargo : digite 1 para assistente tecnico , e 2 para assistente administrativo";
    std::cin >> cargo ; 
    conta.setsalario(salario);
    conta.setnome(nome);
    objAssist.setmatricula(matricula);
    conta.setcargo(cargo);
   
   switch(cargo){
    case 1:
        std::cout << "bonus salarial :" ;
        std::cin >> bonusSalarial ;
        objTec.setbonus(bonusSalarial) ;
        objTec.ganhoAnual();
        objAssist.exibeDados();
        std::cout << "possui um salario anual:R$" << objAssist.getanual();
    break;

    case 2:
        std::cout << "TURNO :";
        std::cin >> turno ;
        if ( turno == "noite"){
        std::cout << "adicional noturno recebido :";
        std::cin >> adicional ;
}else{
    adicional = 0 ;
}
        objAdmin.setturno(turno);
        objAdmin.ganhoAnual();
        objAssist.exibeDados();
        std::cout << "possui um salario anual:R$" << objAssist.getanual();
    break;
   }
   conta.exibeDados();
   
    

     
       
    return 0;
}