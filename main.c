#include <stdio.h>
#include "conjunto.h"

int main(){
    CONJUNTO c, d, e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);
    printf("El conjunto c está vacio %s\n",es_vacio(c));
    c = agregar(c, 1);
    c = agregar(c, 4);
    c = agregar(c, 15);
    c = agregar(c, 18);
    print_conjunto(c);

    d = agregar(d, 2);
    d = agregar(d, 3);
    d = agregar(d, 9);
    d = agregar(d, 19);
    print_conjunto(d);
   
    e = _union(c, d);
    print_conjunto(e);

    return 0;
 }
