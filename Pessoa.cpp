#include "Pessoa.h"

Pessoa::Pessoa(string nome){
    this-> nome = nome;
}

Pessoa::Pessoa(string nome, int idade, string telefone){
    setIdade(idade);
    setNome(nome);
    setTelefone(telefone);
}

int Pessoa::getIdade(){
    return idade;
}

string Pessoa::getNome(){
    return nome;
}

string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setIdade(int idade){
    if(idade < 1)
        this-> idade = 1;
    else
        this-> idade = idade;
}

void Pessoa::setNome(string nome){
    this-> nome = nome;
}

void Pessoa::setTelefone(string telefone){
    this-> telefone = telefone;
}
