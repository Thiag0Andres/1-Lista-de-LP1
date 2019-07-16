/*
Thiago Andres Paiva Palacios.
Questão 5 da lista.
*/

#include "Horario.h"
#include <iostream>

int main(){
    int hora;
    int minuto;
    int segundo;

    Horario *horario1 = new Horario();
    Horario *horario2 = new Horario(15,51,20);

    cout << "A hora 1 (construtor padrao): " << horario1-> getHora() << ":" << horario1-> getMinuto() << ":" << horario1-> getSegundo() << endl << endl;

    cout << "Digite um novo horario" << endl;
    cout << "Digite a hora: ";
    cin >> hora;
    cout << "Digite o minuto: ";
    cin >> minuto;
    cout << "Digite o segundo: ";
    cin >> segundo;

    horario1-> setHora(hora);
    horario1-> setMinuto(minuto);
    horario1-> setSegundo(segundo);

    cout << "\nA hora 1 (sets) eh: " << horario1-> getHora() << ":" << horario1-> getMinuto() << ":" << horario1-> getSegundo() << endl;

    horario1-> setHorario(hora, minuto, segundo);

    cout << "A hora 1 (setHorario): " << horario1-> getHora() << ":" << horario1-> getMinuto() << ":" << horario1-> getSegundo() << endl;

    cout << "A hora 2 (construtor parametros) " << horario2-> getHora() << ":" << horario2-> getMinuto() << ":" << horario2-> getSegundo() << endl;

    horario1-> avancarHorario();
    cout << "A hora 1 (avancaHorario): " << horario1-> getHora() << ":" << horario1-> getMinuto() << ":" << horario1-> getSegundo() << endl;

    delete horario1;
    delete horario2;

    return 0;
}
