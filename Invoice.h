#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Invoice{
    private:
        int numItem;
        int quantItem;
        double precoItem;
        string descricao;
    public:
        //Construtor
        Invoice(int numItem, int quantItem, double precoItem, string descricao);

        //Metodos get
        int getNumItem();
        int getQuantItem();
        double getPrecoItem();
        string getDescricao();
        double getInvoiceAmount();
        //Metodos set
        void setNumItem(int numItem);
        void setQuantItem(int quantItem);
        void setPrecoItem(double precoItem);
        void setDescricao(string descricao);
};

#endif // INVOICE_H_INCLUDED
