#include <stdio.h> 
#include <stdlib.h>

int main (void) {

void teste (void);

teste ();
teste ();
teste ();

void teste2 (void) ;

teste2 ();
teste2 ();
teste2 ();

 system ("pause");
 return 0; 
}

void teste (void) {
 
    int variavelLocalAutomatica = 4;
    variavelLocalAutomatica *= 4;
     printf ("%i\n", variavelLocalAutomatica);

 return variavelLocalAutomatica; 
}

void teste2 (void) {

   int teste2 = 2; 
   teste2 *= 5;
   printf ("%i\n", teste2);

 return teste2;
}