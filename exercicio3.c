#include <stdio.h> 
#include <stdlib.h>

int main (void) { 

float somaDeDigitos (float num1, float num2);
float a, b, soma; 

   printf ("Digite os 2 numeros desejados para fazer a soma:\n");
   scanf ("%f", &a);
   scanf ("%f", &b);

soma = somaDeDigitos (a, b); 

printf ("O Valor da sua soma eh de %f\n", soma); 

 system ("pause");
 return 0;

}
float somaDeDigitos (float num1, float num2) {

     float numeroAbsoluto (float x); 

     if (num1 < 0) {
        num1 = numeroAbsoluto (num1);
     }
     if (num2 < 0) {
        num2 = numeroAbsoluto (num2); 
     }

return num1 + num2;
}
float numeroAbsoluto (float x) {

 return x * -1; 
}