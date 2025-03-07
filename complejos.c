#include "Complejos.h"
#include <stdio.h>
#include <math.h>  // calcular la raíz cuadrada

//  valor real a la parte real del número complejo
COMPLEJOS asigna_real(int real) { 
    COMPLEJOS c;
    c.real = real;
    c.imaginario = 0;
    return c;
}

// valor imaginario a la parte imaginaria del número complejo
COMPLEJOS asigna_imaginario(int imaginario) { 
    COMPLEJOS c; 
    c.real = 0; 
    c.imaginario = imaginario;
    return c;
}

// parte real de un número complejo
int parte_real(COMPLEJOS c) {  
    return c.real;
}

// parte imaginaria de un número complejo
int parte_imaginario(COMPLEJOS c) {  
    return c.imaginario;
}

// valor del módulo 
float modulo_complejo(COMPLEJOS c) { 
    return sqrt(c.real * c.real + c.imaginario * c.imaginario);
}

// suma de dos números complejos
COMPLEJOS suma(COMPLEJOS a, COMPLEJOS b) {  
    COMPLEJOS resultado;
    resultado.real = a.real + b.real;
    resultado.imaginario = a.imaginario + b.imaginario;
    return resultado;
}

