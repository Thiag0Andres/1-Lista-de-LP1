#include "voo.h"

Voo::Voo(){//inicializa a classe voo e as outras classes
    numVoo = 1;
    for(int i = 0; i < NUM_VAGAS; i++){
        nVagas[i] = false;
    }
    Horario();
    Data();
}

Voo::Voo(int numVoo, bool nVagas[NUM_VAGAS], Data d1, Horario h1){
    this -> numVoo = numVoo;
    for(int i = 0; i < NUM_VAGAS; i++){
        this -> nVagas[i] = nVagas[i];
    }
    data1 = d1;
    horario1 = h1;
}

int Voo::proximoLivre(){
    for(int i = 0; i < NUM_VAGAS; i++){
        if(nVagas[i] == false){
            return i;
        }
    }
    return -1;
}

bool Voo::verifica(int cadeira){
    if(nVagas[cadeira] == false)
        return true;
    else
        return false;
}

bool Voo::ocupa(int cadeira){
    if(verifica(cadeira)){
        nVagas[cadeira] = true;
        return true;
    }
    else{
        return false;
    }
}

int Voo::vagas(){
    int cont = 0;

    for(int i = 0; i < NUM_VAGAS; i++){
        if(nVagas[i] == false){
            cont++;
        }
    }

    return cont;
}

int Voo::getNumVoo(){
    return numVoo;
}

Data Voo::getData(){
    return data1;
}

Horario Voo::getHorario(){
    return horario1;
}
