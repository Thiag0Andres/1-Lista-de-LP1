/*
Thiago Andres Paiva Palacios.
Questão 7 da lista.
*/

#include "ControlePagamentos.h"
#include <iostream>

using namespace std;

int main(){

    ControlePagamentos *controlPag = new ControlePagamentos();

    controlPag->setPagamentos("Thiago Andres", 587);
    cout << "Thiago Andres: 587" << endl;
    controlPag->setPagamentos("Thiago Andres", 987);
    cout << "Thiago Andres: 987" << endl;
    controlPag->setPagamentos("Thiago Andres", 1600);
    cout << "Thiago Andres: 1600" << endl;

    cout << "Total pago: " << controlPag-> calculaTotalDePagamentos() << endl << endl;

    cout << "Thiago Andres" << endl;
    if(controlPag-> existePagamentoParaFuncionario("Thiago Andres"))
        cout << "Existe pagamento." << endl << endl;
    else
        cout << "Nao existe pagamento." << endl << endl;

    cout << "Rubens Silva" << endl;
    if(controlPag-> existePagamentoParaFuncionario("Rubens Silva"))
        cout << "Existe pagamento." << endl << endl;
    else
        cout << "Nao existe pagamento." << endl;

    delete controlPag;

    return 0;
}
