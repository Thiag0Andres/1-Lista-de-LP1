#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        //Construtores
        Data();
        Data(int dia, int mes, int ano);

        //Metodos
        int Compara(Data objeto);
        bool isBissexto();
        //Metodos get
        int getDia();
        int getMes();
        int getAno();
        string getMesExtenso();
        //Metodos set
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);

};


#endif // DATA_H_INCLUDED
