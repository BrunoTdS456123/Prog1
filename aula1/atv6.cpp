#include<iostream>
#include <string>
using namespace std;

class Funcionario{
    public:
    Funcionario(){};
    ~Funcionario(){};
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
        std::cout << " de matricula:" << matricula  ;  
    }
     void setmatricula(float matricula_){
        matricula = matricula_ ;
    }; 
    void setnome(std::string nome_){
        nome = nome_ ;
    };  
    
    protected:
     int matricula ;
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
        std::cout << " de matricula:" << matricula  ;  
    }
    float getanual(){               
        return anual;
    }
    float getSalario(){               
            return salario;}
    void setsalario(float salario_){
        salario = salario_ ;
    };
    void setAdicional(float adicional_){
        adicional = adicional_ ;
    };
    void setmatricula(int matricula_){
        matricula = matricula_ ;
    };
    void ganhoAnual(){
         salario = salario + adicional;
         anual = salario *12 ;
    }
    void setturno(std::string turno_){
        turno = turno_ ;
         };
    void setnome(std::string nome_){
        nome = nome_ ;
    };
          
    
    protected:
    int matricula ;
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

    std::cout <<"de o seu nome:";
    std::cin >> nome ;
    std::cout << "de o seu salario :";
    std::cin >> salario ;
    conta.setnome(nome);
    
    objAssist.setnome(nome);
    objAssist.setsalario(salario);

    std::cout << "cargo : digite 1 para assistente tecnico , e 2 para assistente administrativo, 3 para funcionario comum: ";
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
        objTec.setmatricula(matricula);
        objTec.setbonus(bonusSalarial) ;
        objTec.ganhoAnual();
        objTec.setnome(nome);
        objTec.exibeDados();
        std::cout << "possui um salario anual:R$" << objTec.getanual();
    break;

    case 2:
    objAdmin.setsalario(salario);
    objAdmin.setnome(nome);
    std::cout << "TURNO :";
    std::cin >> turno ;
    objAdmin.setturno(turno);
        if ( turno == "noite"){
    std::cout << "adicional noturno recebido :";
    std::cin >> adicional ;
       
        }else{
    adicional = 0 ;
}
       
    objAdmin.setAdicional(adicional);
    objAdmin.setmatricula(matricula);
    objAdmin.ganhoAnual();
    objAdmin.exibeDados();
        std::cout << "possui um salario anual:R$" << objAdmin.getanual();
    break;
    case 3: conta.exibeDados();
    break;
   }
   

   
    

     
       
    return 0;
}