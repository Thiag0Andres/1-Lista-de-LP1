/*
Thiago Andres Paiva Palacios.
Questão 6 da lista.
*/

#include "Voo.h"
#include <iostream>

int main(){

    Voo *v1 = new Voo();

    cout << "(construtor padrao) Numero do voo: " << v1->getNumVoo() << "\nData: " << v1->getData().getDia() << "/" << v1->getData().getMes() << "/" << v1->getData().getAno()
         << "\nHoras: " << v1->getHorario().getHora() << ":" << v1->getHorario().getMinuto() << ":" << v1->getHorario().getSegundo() << endl << endl;

    cout << "A proxima cadeira livre eh: " << v1->proximoLivre() + 1 << endl << endl;

    cout << "Verificando a disponibilidade da cadeira 7...";
    if(v1->verifica(7))
        cout << "disponivel." << endl;
    else
        cout << "ocupada." << endl;

    if(v1->ocupa(7))
        cout << "Cadeira ocupada com sucesso!" << endl;
    else
        cout << "Cadeira indisponivel." << endl << endl;

    cout << v1->vagas() << " vagas disponiveis." << endl;
    cout << "Numero do voo: " << v1->getNumVoo() << endl;
    cout << "Data: " << v1->getData().getDia() << "/" << v1->getData().getMes() << "/" << v1->getData().getAno() << endl;
    cout << "Horas: " << v1->getHorario().getHora() << ":" << v1->getHorario().getMinuto() << ":" << v1->getHorario().getSegundo() << endl;

    delete(v1);

    return 0;
}
