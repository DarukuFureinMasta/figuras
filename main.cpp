#include <iostream>
#include <cmath>
#include <vector>
#include "figuras.h"

using  namespace std;
int main() {
    circulo_t c1 (10,10,10);
    triangulo_t t1 (10,10,20,30);

    vector <figura_t*> vec={&c1,&t1};

    for(auto f :vec)
        cout<<"area es: "<< f->calcular_area()<<endl;
    return 0;
}