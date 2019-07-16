/*
Thiago Andres Paiva Palacios.
Questão 4 da lista.
*/

#include "Data.h"
#include <iostream>

int main(){
    int dia;
    int mes;
    int ano;
    int aux;
    bool aux1;

    //Data corrente
    Data *data1 = new Data();
    //Data parametro
    Data *data2 = new Data(29, 10, 2016);

    //Construtor padrao
    cout << "A data 1 (construtor padrao): " << data1-> getDia() << "/" << data1-> getMes() << "/" << data1-> getAno() << endl << endl;

    cout << "Digite um nova data" << endl;
    cout << "Digite um dia: ";
    cin >> dia;
    cout << "Digite o mes: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;

    data1-> setDia(dia);
    data1-> setMes(mes);
    data1-> setAno(ano);

    cout << "\nA data 1: " << data1-> getDia() << "/" << data1-> getMes() << "/" << data1-> getAno() << endl;
    cout << "A data 1 (Data corrente): " << data1-> getDia() << " de " << data1-> getMesExtenso() << " de " << data1-> getAno() << endl;
    cout << "A data 2 (Data parametro): " << data2-> getDia() << " de " << data2-> getMesExtenso() << " de " << data2-> getAno() << endl;

    aux = data1-> Compara(*data2);

    if(aux == 1){
        cout << "\nA data atual eh maior que a data do parametro" << endl;
    }
    else if(aux == -1){
        cout << "\nA data do parametro eh maior que a data atual" << endl;
    }
    else{
        cout << "\nA data atual e a data do parametro sao iguais" << endl;
    }

    aux1 = data1-> isBissexto();
    if(aux1){
        cout << data1-> getAno() << " eh bissexto." << endl;
    }else{
        cout << data1-> getAno() << " nao eh bissexto." << endl;
    }

    aux1 = data2-> isBissexto();
    if(aux1){
        cout << data2-> getAno() << " eh bissexto." << endl;
    }else{
        cout << data2-> getAno() << " nao eh bissexto." << endl;
    }

    delete data1;
    delete data2;

    return 0;
}
