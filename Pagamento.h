#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Pagamento{
    private:
        double valorPagamento;
        string nomeFuncionario;
    public:
        //Construtor
        Pagamento();
        //Metodos get
        double getValorPagamento();
        string getNomeFuncionario();
        //Metodos set
        void setValorPagamento(double valor);
        void setNomeFuncionario(string nome);

};

#endif // PAGAMENTO_H_INCLUDED
