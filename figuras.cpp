//
// Created by utec on 13/11/19.
//

#include "figuras.h"
#include <cmath>
#include <vector>
figura_t::figura_t(posicion_t x, posicion_t y, longitud_t w, posicion_t h):x(x),y(y),w(w),h(h) {

}

posicion_t figura_t::get_x() {
    return x;
}

posicion_t figura_t::get_y() {
    return y;
}


circulo_t::circulo_t(posicion_t x, posicion_t y, longitud_t r):figura_t(x, y, r*2, r*2) {

}

area_t circulo_t::calcular_area() {
    return w*h*3.1416/4;
}

triangulo_t::triangulo_t(posicion_t x, posicion_t y, longitud_t w, posicion_t h) : figura_t(x, y, w, h) {

}

area_t triangulo_t::calcular_area() {
    return w*h/2;
}
