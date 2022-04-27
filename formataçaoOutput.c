#include <stdio.h> 
#include <stdlib.h> 


int main (void) {

int intvar = 99999999;
int intvar2 = 10;
double doubleVar = 100.123456789; 

/* VARIAVEIS INTEIRAS 
%i = Vai mostrar a variavel inteira.
%x = Vai mostrar o valor da variavel inteira, na base Hexadecimal. 
%o = Vai mostrar o valor da variavel inteira, na base Octal. 
%d = Funciona como a %i 

Para colocar uma % no progama, basta adicionar duas seguidas (%%i), onde vai mostrar somente uma. 
Para o número ir para esquerda no OUTPUT você coloca %ni, onde N é o valor de casas que você quer mudar */ 

    printf ("Variavel Inteira (%%i) = %i\n", intvar2);
    printf ("Variavel Inteira (%%d) = %d\n", intvar);
    printf ("Variavel Inteira (%%x) = %x\n", intvar);
    printf ("Variavel Inteira (%%o) = %o\n", intvar);
    printf ("\n");

/* VARIAVEIS FLOAT E DOUBLE 

%f = vai aproximar as casas decimais 
%g = aproxima de uma forma mais "brusca"
%e = vai mostrar o número em notação científica 
%a = vai mostrar o número em notação científica, porém de uma forma diferente da do %e. 

Caso queira delimitar a quantidade de casas decimais é só usar da seguinte forma %.nf, onde N é a quantidade de casas decimais desejadas. 

*/

   printf ("Variavel Double (%%f) = %.2f\n", doubleVar);
   printf ("Variavel Double (%%g) = %g\n", doubleVar);
   printf ("Variavel Double (%%e) = %e\n", doubleVar);
   printf ("Variavel Double (%%a) = %a\n", doubleVar);



 system ("pause");
 return 0;
}