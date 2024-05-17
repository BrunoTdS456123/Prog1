#include<iostream>
#include <string>

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
         std::cout << "O Funcionario " << nome << "de recebe um salario de:R$" << salario ;  
       
    };
    void setsalario(float salario_){
        salario = salario_ ;
    };
    void setimposto(float imposto_){
        imposto = imposto_ ;
    };
    void setbeneficio(float beneficio_){
        beneficio = beneficio_ ;
    };
    
      float getSalario(){               
            return salario;
            
        }
       
    private:
        
        std::string nome;
        std::string cargo;
        float salario , anual;
        
        
};

int main(){
    Funcionario conta;
    std::string nome;
    std::string cargo;
    float salario , imposto , beneficio , salarioB;
    
   
     std::cout << "de a seu nome:";
   std::cin >> nome ;
     std::cout << "de o seu salario :";
   std::cin >> salario ;
   
    conta.setsalario(salarioB);
    conta.setimposto(imposto);
    conta.setbeneficio(beneficio);
   conta.calcularsalario();
  
     std::cout << "O Funcionario " << nome << " de salario: " << salario << " de recebe um salario liquido de: " << conta.getSalario(); 
    std::cout << "\n";
     
       
    return 0;
}