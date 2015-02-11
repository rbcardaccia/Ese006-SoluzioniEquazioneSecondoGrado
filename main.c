#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funzioni.h"

float calcolaDelta(float a, float b, float c);
int esistonoSoluzioniReali(float a,float b,float c);
float soluzione1(float a, float b, float c);
float soluzione2(float a, float b, float c);
void stampa(float x1, float x2);
int main(int argc, char** argv) {
    float a,b,c,r1,r2;
    
    printf("Inserisci il valore a: ");
    scanf("%f",&a);
    printf("Inserisci il valore b: ");
    scanf("%f",&b);
    printf("Inserisci il valore c: ");
    scanf("%f",&c);
    if (esistonoSoluzioniReali(a,b,c)){
    r1=soluzione1(a,b,c);
    r2=soluzione2(a,b,c);
    stampa(r1,r2);
    }
    else{
        puts("NON ESISTONO SOLUZIONI!");
    }    
    return (EXIT_SUCCESS);
}

void stampa(float x1,float x2){
 
    printf("Il valore di x1 è: %f\n",x1);
    printf("Il valore di x2 è: %f\n",x2);
    
}