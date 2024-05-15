#include<iostream>


class Circulo{
    public:
    Circulo(){};
    ~Circulo(){};
    float calcularArea(){
        float area;
        area= 3.14*(raio*raio) ;
        return area;
    };
    void setRaio(float raio2){
        raio = raio2 ;
    };
    float calculePerimetro(){
        perimetro = 3.14*raio*2;
        return perimetro;
    };
    private:
    float raio , area , perimetro;
};

int main(){
    Circulo conta;
    float raio , area , perimetro;
   std::cout << "de o valor do raio:";
   std::cin >> raio ;
   conta.setRaio(raio);
   area = conta.calcularArea();
   std::cout << "A área é: " << area;
        std::cout << "\n";
         perimetro = conta.calculePerimetro();
        std::cout << "O perimetro é " << perimetro;
}