#include<iostream>
#include <string>

class Aluno{
    public:
    Aluno(){};
    ~Aluno(){};
    float calcularMedia(){
        
       media= (nota1+nota2+nota3)/3 ;
        return media;
    };
    void setnota1(float nota1_){
        nota1 = nota1_ ;
    };
    void setnota2(float nota2_){
        nota2 = nota2_ ;
    };
    void setnota3(float nota3_){
        nota3 = nota3_ ;
    };
    
      float getMedia(){               
            return media;
            
        }
       
    private:
        
        std::string nome;
        int matricula ;
        float nota1;
        float nota2;
        float nota3;
        float media;
        
};

int main(){
    Aluno conta;
    std::string nome;
    int matricula ;
   
    float nota1;
    float nota2;
    float nota3;
    float media;
     std::cout << "de a sua matricula:";
   std::cin >> matricula ;
     std::cout << "de o seu nome:";
   std::cin >> nome ;
   std::cout << "de o valor da da nota1:";
   std::cin >> nota1 ;
    std::cout << "de o valor da da nota2:";
   std::cin >> nota2 ;
    std::cout << "de o valor da da nota3:";
   std::cin >> nota3 ;
    conta.setnota1(nota1);
    conta.setnota2(nota2);
    conta.setnota3(nota3);
   conta.calcularMedia();
  
     std::cout << "O aluno " << nome << " de matricula: " << matricula; 
    std::cout << "\n";
         if (conta.getMedia() >= 6){                                    
        std::cout << " foi aprovado,  com média !!!" << conta.getMedia();  
    }else{
        std::cout << " foi reprovado, com média !" << conta.getMedia(); 
    }
       
    return 0;
}