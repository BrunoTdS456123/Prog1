#include<iostream>
#include<string>

using namespace std;
class ContaBancaria{
    public:
     ContaBancaria(){};
        ~ContaBancaria(){};
        float deposito(float deposito){
            saldo=saldo + deposito ; 
            return saldo
        };
        float saque(float saque){
           saldo = saldo - saque ; 
           return saldo;
        };
        void setNumeroConta(float conta2){
conta= conta2 ;
        };
        void setSaldo(float saldo2){
saldo= saldo2 ;
        };

    private:
    int conta;
    float saldo;
    string Titularnome;

};



int main(){
    ContaBancaria conta;
    int conta;
    int opcao
    float saldo ,  deposito , saque ;
     
        std::cout << "Digite o numero da conta: ";
        std::cin >> numeroConta;
        
        std::cout << "Digite o nome titular da conta: ";
        std::cin >> nomeTitular;
        
        conta.setNumeroConta(conta);

     std::cout << "Digite o valor na conta: ";
        std::cin >> saldo;
        
        conta.setSaldo(saldo);
    std::cout << "Digite o numero correspondente a ação: \n 1-Deposito, 2-Saque \n";
        
        std::cin >> opcao;

        switch (opcao){
            case 1:
                std::cout << "Digite o valor do depósito: ";
                std::cin >> deposito;
                saldo = conta.fazerDeposito(deposito);
                break;
                
            case 2:
                std::cout << "Digite o valor do saque: ";
                std::cin >> saque;
                saldo = conta.fazerSaque(saque);
                break;
            
            default:
                std::cout << "Numero inválido, redigite ";
        }
        
        
        
    std::cout << numeroConta << "\n";
    std::cout << nomeTitular << "\n";
    std::cout << saldo;
    }



}