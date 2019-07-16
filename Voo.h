#ifndef VOO_H_INCLUDED
#define VOO_H_INCLUDED

#include "Data.h"
#include "Horario.h"
#include <iostream>

#define NUM_VAGAS 100

class Voo{
    private:
        int numVoo;
        bool nVagas[NUM_VAGAS];
        Data data1;
        Horario horario1;
    public:
        //Construtores
        Voo();
        Voo(int numVoo, bool nVagas[NUM_VAGAS], Data d1, Horario h1);

        //Metodos
        int proximoLivre();
        bool verifica(int cadeira);
        bool ocupa(int cadeira);
        int vagas();
        //Metodos get
        int getNumVoo();
        Data getData();
        Horario getHorario();
};

#endif // VOO_H_INCLUDED
