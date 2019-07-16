#include "Horario.h"

Horario::Horario(){
    hora = minuto = segundo = 0;
}

Horario::Horario(int hora, int minuto, int segundo){
    setHora(hora);
    setMinuto(minuto);
    setSegundo(segundo);
}

void Horario::avancarHorario(){
    if(segundo >= 59){
        segundo = 0;
        minuto++;
    }
    if(minuto >= 59){
        minuto = 0;
        hora++;
    }
    if(hora >= 23){
        hora = 0;
    }
}

int Horario::getHora(){
    return hora;
}

int Horario::getMinuto(){
    return minuto;
}

int Horario::getSegundo(){
    return segundo;
}

void Horario::setHora(int hora){
    if(hora < 1 || hora > 23)
        this-> hora = 0;
    else
        this -> hora = hora;
}

void Horario::setMinuto(int minuto){
    if(minuto < 1 || minuto > 59)
        this-> minuto = 0;
    else
        this -> minuto = minuto;
}

void Horario::setSegundo(int segundo){
    if(segundo < 1 || segundo > 59)
        this-> segundo = 0;
    else
        this -> segundo = segundo;
}

void Horario::setHorario(int hora, int minuto, int segundo){
    setHora(hora);
    setMinuto(minuto);
    setSegundo(segundo);
}
