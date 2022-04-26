#include <stdio.h> 
#include <stdlib.h>

int main (void) {

void teste (void);

teste (); 
teste (); 
teste (); 
teste (); 

 system ("pause");
 return 0; 
}
 void teste (void) {

   int variavelLocalAutomatica = 2;
   variavelLocalAutomatica *= 2;
      printf ("Variavel Local Automatica eh %i\n", variavelLocalAutomatica);

   static int variavelLocalEstatica = 2;
   variavelLocalEstatica *= 2;
      printf ("Variavel Local Estatica eh %i\n", variavelLocalEstatica);

 return variavelLocalAutomatica, variavelLocalEstatica;
 }