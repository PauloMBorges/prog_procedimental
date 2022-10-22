/* Escreva um programa que leia as coordenadas x e y de pontos no R^2 e calcule sua distância 
da origem (0, 0). */

// d² = x² + y²
// d = sqrt(x² + y²)

#include <stdio.h>

int main (){ 
   float x, y, d;
   printf("Digite as coordenadas x e y: ");
   scanf("%f %f", &x, &y);
   d = sqrt(x*x + y*y);
   printf("A distancia da origem eh %f", d);
   return 0;

}