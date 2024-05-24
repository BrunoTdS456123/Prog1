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
        std::cout << "O Funcionario " << nome << " recebe um salario de:R$" << salario ;  
       
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
        
      
   protected:
        
         std::string nome;
        int cargo ;
        float salario , anual;
        
        
};

class Assistente : public Funcionario {
     public:
    Assistente(){};
    ~Assistente(){};
    void setnome(std::string nome_){
        nome = nome_ ;
    };
     void setsalario(float salario_){
        salario = salario_ ;
    };
    void setmatricula(int matricula_){
        matricula = matricula_ ;
    };
    float getmatricula(){               
            return matricula;
            }
           
    float getSalario(){               
            return salario;}
        
    void exibeDados(){
        std::cout << "O Funcionario " << nome << " recebe um salario de:R$" << getSalario();  
        std::cout << "de matricula:" << matricula  ;  
    }

   
    protected:
    int matricula ; 
    int cargo  ;
};
    class Tecnico : public Assistente {
     public:
    Tecnico(){};
    ~Tecnico(){};
    float getSalario(){               
            return salario;}
     void setsalario(float salario_){
        salario = salario_ ;
    };
      float getanual(){               
        return anual;
    }
    void ganhoAnual(){
         salario= bonusSalarial + salario ;
         anual= salario*12 ;
    }
    void setbonus(float bonusSalarial_){
        bonusSalarial = bonusSalarial_ ;
         };
    void exibeDados(){
        std::cout << "O Funcionario " << nome << " recebe um salario de:R$" << getSalario();  
        std::cout << "de matricula:" << matricula  ;  
    }
        
    
    protected:
    float bonusSalarial ;
     std::string nome;
    int cargo ;
    float salario , anual;
        
    
};
class administrativo : public Assistente {
     public:
    administrativo(){};
    ~administrativo(){};
    void exibeDados(){
        std::cout << "O Funcionario " << nome << " recebe um salario de:R$" << getSalario();  
        std::cout << "de matricula:" << matricula  ;  
    }
      float getanual(){               
        return anual;
    }
    void setsalario(float salario_){
        salario = salario_ ;
    };
    void setAdicional(float adicional_){
        adicional = adicional_ ;
    };
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
    std::string nome;
    int cargo ;
    float salario , anual;
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
    conta.setnome(nome);
    
    objAssist.setnome(nome);
    objAssist.setsalario(salario);

    std::cout << "cargo : digite 1 para assistente tecnico , e 2 para assistente administrativo, 3 para funcionario comum";
    std::cin >> cargo ; 
    if (cargo != 3){
        std::cout << "matricula :";
        std::cin >> matricula ;
        objAssist.setmatricula(matricula);
        
    }else{
        conta.setsalario(salario);
    }
   switch(cargo){
    case 1:
    objTec.setsalario(salario);
        std::cout << "bonus salarial :" ;
        std::cin >> bonusSalarial ;

        objTec.setbonus(bonusSalarial) ;
        objTec.ganhoAnual();
        objTec.exibeDados();
        std::cout << "possui um salario anual:R$" << objTec.getanual();
    break;

    case 2:
    objAdmin.setsalario(salario);
        std::cout << "TURNO :";
        std::cin >> turno ;
        if ( turno == "noite"){
        std::cout << "adicional noturno recebido :";
        std::cin >> adicional ;
        objAdmin.setAdicional(adicional);
}else{
    adicional = 0 ;
}
        objAdmin.setturno(turno);
        objAdmin.ganhoAnual();
        objTec.exibeDados();
        std::cout << "possui um salario anual:R$" << objAdmin.getanual();
    break;
    case 3: conta.exibeDados();
    break;
   }
   

   
    

     
       
    return 0;
}