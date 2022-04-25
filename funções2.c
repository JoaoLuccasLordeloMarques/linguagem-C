#include <stdio.h>
#include <stdlib.h>

int main (void) {

int calcularAreaDoQuadrado (int lado);

int area = calcularAreaDoQuadrado (25);
    printf ("O valor da area do Quadrado eh %i\n", area); 

int calcularAreaDoRetang (int base, int altura);
int area2 = calcularAreaDoRetang (20, 50);
    printf ("O valor da area do retangulo eh %i\n", area2);
 

 return 0;
}
int calcularAreaDoQuadrado (int lado) {
int area = lado * lado;

return area; 
}
int calcularAreaDoRetang (int base, int altura) {
int area2 = base * altura;

return area2;
}