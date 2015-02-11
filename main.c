#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "math.h"

int main(int argc, char** argv) {
    float a, b, c, x1, x2;
    
    printf("Inserisci il valore a: ");
    scanf("%f", &a);
    printf("Inserisci il valore b: ");
    scanf("%f", &b);
    printf("Inserisci il valore c: ");
    scanf("%f", &c);
    
    if (esistonoSoluzioniReali(a, b, c)){
    
    x1 = soluzione1(a, b, c);
    x2 = soluzione2(a, b, c);
    stampa(x1, x2);
    }
    else{
        printf("Non ci sono soluzioni reali utili a risolvere l' equazione!");
    }    
    return (EXIT_SUCCESS);
}

void stampa (float x1,float x2){
 
    printf("x1 vale: %f\n", x1);
    printf("x2 vale: %f\n", x2);
    
}