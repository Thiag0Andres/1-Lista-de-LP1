#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Pessoa{
    private:
        int idade;
        string nome;
        string telefone;

    public:
        //Construtores
        Pessoa(string nome);
        Pessoa(string nome, int idade, string telefone);

        //Metodos get
        int getIdade();
        string getNome();
        string getTelefone();
        //Metodos set
        void setIdade(int idade);
        void setNome(string nome);
        void setTelefone(string telefone);
};

#endif // PESSOA_H_INCLUDED
