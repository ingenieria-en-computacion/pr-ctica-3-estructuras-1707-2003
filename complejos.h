#ifndef COMPLEJOS_H
#define COMPLEJOS_H

typedef struct {
    int real;
    int imaginario;
} COMPLEJOS;

COMPLEJOS asigna_real(int real);
COMPLEJOS asigna_imaginario(int imaginario);
int parte_real(COMPLEJOS c);
int parte_imaginario(COMPLEJOS c);
COMPLEJOS suma(COMPLEJOS a, COMPLEJOS b);
int modulo_complejo(COMPLEJOS c);

#endif
