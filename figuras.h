//
// Created by utec on 13/11/19.
//

#ifndef UNTITLED_FIGURAS_H
#define UNTITLED_FIGURAS_H

#include <vector>
using namespace std;
typedef double longitud_t;
typedef int posicion_t;
typedef double area_t;

class figura_t{
protected:
    posicion_t x;
    posicion_t y;
    longitud_t w;
    longitud_t h;
public:
    figura_t (posicion_t x, posicion_t y, longitud_t w, posicion_t h);
    posicion_t  get_x();
    posicion_t  get_y();
    virtual area_t  calcular_area()=0 ;
};

class circulo_t: public  figura_t{
private:

public:
    circulo_t (posicion_t x, posicion_t y, longitud_t r);
    area_t calcular_area();
};

class triangulo_t: public figura_t{
private:
public:
    triangulo_t (posicion_t x, posicion_t y, longitud_t w, posicion_t h);
    area_t calcular_area();
};
#endif //UNTITLED_FIGURAS_H
