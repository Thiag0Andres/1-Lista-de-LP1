#ifndef HORARIO_H_INCLUDED
#define HORARIO_H_INCLUDED

#include <iostream>

using namespace std;

class Horario{
    private:
        int hora;
        int minuto;
        int segundo;
    public:
        //Construtores
        Horario();
        Horario(int hora, int minuto, int segundo);
        //Metodos
        void avancarHorario();
        //Metodos get
        int getHora();
        int getMinuto();
        int getSegundo();
        //Metodos set
        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);
        void setHorario(int hora, int minuto, int segundo);
};

#endif // HORARIO_H_INCLUDED
