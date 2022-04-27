#include <stdio.h> 
#include <stdlib.h>

int gResultado;

int main (void) {

    int fatorial (int x); 
    int numero; 

    printf ("Insira o numero que vai ser fatorado:\n"); 
    scanf ("%i", &numero);

    gResultado = fatorial (numero); 
 
    printf ("O resultado eh %i\n", gResultado);

  system ("pause");
  return 0;
}
 int fatorial (int x) {

   if (x == 0) {
       gResultado = 1;
   } else {
       gResultado = x * fatorial (x - 1);
   }

 return gResultado;     
 }