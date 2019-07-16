/*
Thiago Andres Paiva Palacios.
Questão 2 da lista.
*/

#include "Pessoa.h"
#include <iostream>
#include <string>

int main(){
    int idade;
    string nome;
    string telefone;

    Pessoa *p1= new Pessoa(nome);
    Pessoa *p2= new Pessoa("Thiago Andres", 19, "(38) 9992001556");

    cout << "Digite o nome: ";
    cin >> nome;
    p1-> setNome(nome);

    cout << "Nome 1: "<< p1->getNome() << endl << endl;

    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Digite o telefone: ";
    cin >> telefone;

    p1->setNome(nome);
    p1->setIdade(idade);
    p1->setTelefone(telefone);

    cout << "\nNome 1: "<< p1->getNome() << "\nIdade 1: " << p1->getIdade() << "\nTelefone 1: " << p1->getTelefone()<< endl << endl;
    cout << "Nome 2: "<< p2->getNome() << "\nIdade 2: " << p2->getIdade() << "\nTelefone 2: " << p2->getTelefone() << endl;

    delete p1;
    delete p2;

    return 0;
}
