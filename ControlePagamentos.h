#ifndef CONTROLEPAGAMENTOS_H_INCLUDED
#define CONTROLEPAGAMENTOS_H_INCLUDED

#include "Pagamento.h"

#define MAX_PAGAMENTOS 100

using namespace std;

class ControlePagamentos{
    private:
        Pagamento pay[MAX_PAGAMENTOS];
    public:
        //Construtor
        ControlePagamentos();
        //Metodos
        void setPagamentos(string nomeFuncionario, double valorPagamento);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario (string nomeFuncionario);
        int VerificaIndiceDisponivel();
};

#endif // CONTROLEPAGAMENTOS_H_INCLUDED
