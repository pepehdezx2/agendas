//
//  main.cpp
//  composicion
//
//  Created by Jose Antonio on 27/02/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Reloj.h"
#include "Evento.h"
using namespace std;
int main() {
    int tam, duracion, ho, min;
    string asunto;
    Reloj inicio;
    Reloj hora[30];
    Evento eventos[30];
    cout << "cuantos eventos habra" << endl;
    cin >> tam;
    for (int i=0; i<tam; i++){
        cout << "hora de inicio" << endl;
        cin >> ho;
        cout << "minuto de inicio" << endl;
        cin >> min;
        cout << "cual es la duracion del evento en minutos" << endl;
        cin >> duracion;
        cout << "asunto a tratar" << endl;
        cin.ignore();
        getline(cin, asunto);
        hora[i].setHora(ho);
        hora[i].setMinutos(min);
        eventos[i].setInicio(hora[i]);
        eventos[i].setDuracion(duracion);
        eventos[i].setAsunto(asunto);
    }
    for (int i=0; i<tam; i++){
        inicio=eventos[i].getInicio();
        duracion=eventos[i].getDuracion();
        asunto=eventos[i].getAsunto();
        ho=inicio.getHora();
        min=inicio.getMinutos();
        cout << "el evento " << asunto << " inicia a "  << setw(2) << setfill('0')<< ho << ":" << setw(2) << setfill('0') << min << " y tiene una duracion de " << duracion << " minutos" << endl;
    }
    return 0;
}
