#include <stdio.h>
#include <stdlib.h> 

int gVariavelGlobal = 2;

int main (void) {

void teste (void);

teste();
teste();
teste();

 system ("pause");
 return 0;   
}
void teste (void) {

int variavelLocalAutomatica = 2;
variavelLocalAutomatica *= 2;
   printf ("Local Automatica eh %i\n", variavelLocalAutomatica);

static int variavelLocalEstatica = 2;
variavelLocalEstatica *= 2;
   printf ("Local Estatica eh %i\n", variavelLocalEstatica); 

gVariavelGlobal *= 4;
   printf ("Global eh %i\n", gVariavelGlobal);

 return variavelLocalAutomatica, variavelLocalEstatica, gVariavelGlobal;
}