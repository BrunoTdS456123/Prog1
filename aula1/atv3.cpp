#include<iostream>
#include <string>

class Retangulo{
    public:
    Retangulo(){};
    ~Retangulo(){};
    float calcularArea(){
        
        area= largura*altura ;
        return area;
    };
    void setAltura(float altura2){
        altura = altura2 ;
    };
    void setLargura(float largura2){
        largura = largura2 ;
    };
    float calcularPerimetro(){
        perimetro =  2 * (largura + altura);
        return perimetro;
    };
      float getPerimetro(){               // Metodo que utiliza o valor da class caso tenha uma alteração
            return perimetro;
            
        }
        
        float getArea(){                    // Metodo que utiliza o valor da class caso tenha uma alteração
            return area;
        }
    private:
        float altura;
        float largura;
        float area;
        float perimetro;
};

int main(){
    Retangulo conta;
    float largura , altura , perimetro, area;
   std::cout << "de o valor da altura:";
   std::cin >> altura ;
   conta.setAltura(altura);
   std::cout << "de o valor da largura:";
   std::cin >> largura ;
    conta.setLargura(largura);
   conta.calcularArea();
   conta.calcularPerimetro();
   std::cout << "A área do retangulo é: " << conta.getArea() ;
        std::cout << "\n";
        
        std::cout << "O perimetro do perimetro é " << conta.getPerimetro() ;
    return 0;
}