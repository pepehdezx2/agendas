//
//  Reloj.h
//  composicion
//
//  Created by Jose Antonio on 27/02/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef Reloj_h
#define Reloj_h
using namespace std;
class Reloj{
public:
    Reloj();
    Reloj(int ho, int min);
    void setHora(int ho);
    void setMinutos(int min);
    int getHora();
    int getMinutos();
private:
    int hora, minutos;
};
Reloj::Reloj(){
    hora=0;
    minutos=0;
}
Reloj::Reloj(int ho, int min){
    hora=ho;
    minutos=min;
}
void Reloj::setHora(int ho){
    hora=ho;
}
void Reloj::setMinutos(int min){
    minutos=min;
}
int Reloj::getHora(){
    return hora;
}
int Reloj::getMinutos(){
    return minutos;
}

#endif /* Reloj_h */
