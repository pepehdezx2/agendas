//
//  Evento.h
//  composicion
//
//  Created by Jose Antonio on 27/02/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef Evento_h
#define Evento_h
#include "Reloj.h"
using namespace std;
class Evento{
public:
    Evento();
    Evento(Reloj inicio, int dura, string asu);
    void setInicio(Reloj inicio);
    void setDuracion(int dura);
    void setAsunto(string asu);
    Reloj getInicio();
    int getDuracion();
    string getAsunto();
private:
    Reloj iniciop;
    int duracion;
    string asunto;
};
Evento::Evento(){
    Reloj relojp(8,0);
    iniciop=relojp;
    duracion=30;
    asunto="Evento";
}
Evento::Evento(Reloj inicio, int dura, string asu){
    iniciop=inicio;
    duracion=dura;
    asunto=asu;
}
void Evento::setInicio(Reloj inicio){
    iniciop=inicio;
}
void Evento::setDuracion(int dura){
    duracion=dura;
}
void Evento::setAsunto(string asu){
    asunto=asu;
}
Reloj Evento::getInicio(){
    return iniciop;
}
int Evento::getDuracion(){
    return duracion;
}
string Evento::getAsunto(){
    return asunto;
}
#endif /* Evento_h */
