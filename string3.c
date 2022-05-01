#include <stdio.h>

int main (void) {

// PARA O PRINTF ENTENDER QUE A STRING ACABOU, É NESCESSÁRIO \0, por isso q a de 6 não funciona mas a de 7 sim
// porque estava com o espaço do /0. O /0 conta apenas como 1 caractere, mesmo utilizando 2. 

// char palavra[6] = {'I', 'd', 'i', 'o', 't', 'a'}; 
// char palavra[] = {'I', 'd', 'i', 'o', 't', 'a'};
// char palavra[7] = {"Idiota\0"};
// char palavra[] = {"Idiota\0"};
char palavra[] = "Idiota\0"; 


printf("%s\n", palavra);


    system ("pause");
    return 0;
} 