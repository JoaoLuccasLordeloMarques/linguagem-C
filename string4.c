#include <stdio.h>
#include <stdlib.h>

int main (void) {

int tamanhoDeStrings (char string[]);
char stringUsuario[20];

printf ("Insira aqui a palavra/string desejada:\n");
scanf ("%s", &stringUsuario);

tamanhoDeStrings (stringUsuario); 

int num = tamanhoDeStrings(stringUsuario); 

printf ("A quantidade de letras de %s eh %i.\n", stringUsuario, 
                                                 num);


    system ("pause");
    return 0;
}
int tamanhoDeStrings (char string[]) {

 int numDeCaracteres = 0;

 while (string[numDeCaracteres] != '/0') {
     ++numDeCaracteres; 
 }
     

  return numDeCaracteres;
}