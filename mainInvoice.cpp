/*
Thiago Andres Paiva Palacios.
Questão 3 da lista.
*/

#include "Invoice.h"
#include <iostream>
#include <string>


int main(){
    int numItem;
    int quantItem;
    double precoItem;
    string descricao;

    Invoice *in1 = new Invoice(numItem, quantItem, precoItem, descricao);

    cout << "Digite o numero do item: ";
    cin >> numItem;
    cout << "Digite a quantidade item: ";
    cin >> quantItem;
    cout << "Digite o preco do item: ";
    cin >> precoItem;
    cout << "Digite a descricao do item: ";
    cin >> descricao;

    in1-> setNumItem(numItem);
    in1-> setQuantItem(quantItem);
    in1-> setPrecoItem(precoItem);
    in1-> setDescricao(descricao);

    cout << "\nItem "<< in1-> getNumItem() << ": " << in1-> getDescricao() << "\nQuantidade: " << in1-> getQuantItem() << "\nPreco: " << in1-> getPrecoItem()<< endl;
    cout << "Preco final: " << in1->getInvoiceAmount() << endl << endl;

    delete in1;

    return 0;
}
