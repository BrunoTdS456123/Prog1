#include<iostream>
#include<string>

using namespace std;
class ContaBancaria{
    public:
     ContaBancaria(){};
        ~ContaBancaria(){};
        float deposito(float deposito){
            saldo=saldo + deposito ; 
            return saldo;
        };
        float saque(float saque){
           saldo = saldo - saque ; 
           return saldo;
        };
        void setNumeroConta(int conta2){
            Nconta= conta2 ;
        };
        void setSaldo(float saldo2){
            saldo= saldo2 ;
        };

    private:
    int Nconta;
    float saldo;
    string nomeTitular;

};



int main(){
    ContaBancaria conta;
    int Nconta;
    int opcao;
    float saldo ,  deposito , saque ;
    std::string nomeTitular;
     
    std::cout << "Digite o numero da conta: ";
    std::cin >> Nconta;
        
    std::cout << "Digite o nome titular da conta: ";
    std::cin >> nomeTitular;
        
    conta.setNumeroConta(Nconta);

    std::cout << "Digite o valor na conta:";
    std::cin >> saldo;
        
    conta.setSaldo(saldo);
    std::cout << "Digite o numero correspondente a ação: \n 1-Deposito, 2-Saque \n";
        
    std::cin >> opcao;

        switch (opcao){
            case 1:
                std::cout << "Digite o valor do depósito: ";
                std::cin >> deposito;
                saldo = conta.deposito(deposito);
                break;
                
            case 2:
                std::cout << "Digite o valor do saque: ";
                std::cin >> saque;
                saldo = conta.saque(saque);
                break;
            
            default:
                std::cout << "Numero inválido, redigite ";
        }
        
        
        
    std::cout << "Num conta:" << Nconta << "\n";
    std::cout <<  "Titular:" << nomeTitular << "\n";
    std::cout << "saldo:" << saldo;
    }
