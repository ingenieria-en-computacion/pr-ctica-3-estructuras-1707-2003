#include <stdio.h>
#include "Complejos.h"

int main() {
    
    // valores de los complejos
    COMPLEJOS c, d, e, f, resultado; 
    

    c = asigna_real(4);
    d = asigna_imaginario(2);

    // Imprime los números complejos
    printf("Nuevo complejo c: (%d + %di)\n", c.real, c.imaginario);
    printf("Nuevo complejo d: (%d + %di)\n", d.real, d.imaginario);
    
    // Parte real y parte imaginaria de c
    int REAL = parte_real(c);
    int IMAGINARIO = parte_imaginario(c);

    printf("Parte real de c: %d\n", REAL);
    printf("Parte imaginaria de c: %d\n", IMAGINARIO);

    // Suma de complejos
    printf("Escribe la parte real e imaginaria del primer complejo:\n");
    scanf("%d %d", &e.real, &e.imaginario);
    printf("Escribe la parte real e imaginaria del segundo complejo:\n");
    scanf("%d %d", &f.real, &f.imaginario);

    resultado = suma(e, f);
    printf("El resultado de la suma es: %d + %di\n", resultado.real, resultado.imaginario);

    // Módulo de un complejo
    printf("Escribe la parte real e imaginaria del complejo para calcular el módulo:\n");
    scanf("%d %d", &e.real, &e.imaginario);
    int modulo = modulo_complejo(e);
    printf("El módulo del complejo es: %.2f\n", (float)modulo);

    return 0;
}
