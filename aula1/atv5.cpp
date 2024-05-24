#include<iostream>
#include <string>

class Funcionario{
    public:
    Funcionario(){};
    ~Funcionario(){};
    float calcularsalario(){
        
       salario = salarioB + beneficio - imposto ;
        return salario;
    };
    void setsalario(float salario_){
        salarioB = salario_ ;
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
        float salario , imposto , beneficio , salarioB;
        
        
};

int main(){
    Funcionario conta;
    std::string nome;
    std::string cargo;
    float salario , imposto , beneficio , salarioB;
    
   
     std::cout << "de a seu nome:";
   std::cin >> nome ;
     std::cout << "de o seu salario bruto:";
   std::cin >> salarioB ;
   std::cout << "qual seu cargo:";
   std::cin >> cargo ;
    std::cout << "quanto de imposto mensal voce paga:";
   std::cin >> imposto ;
    std::cout << "quanto de beneficio vc recebe:";
   std::cin >> beneficio ;
    
    conta.setsalario(salarioB);
    conta.setimposto(imposto);
    conta.setbeneficio(beneficio);
   conta.calcularsalario();
  
     std::cout << "O Funcionario " << nome << " de cargo: " << cargo << "  recebe um salario liquido de: " << conta.getSalario(); 
    std::cout << "\n";
     
       
    return 0;
}