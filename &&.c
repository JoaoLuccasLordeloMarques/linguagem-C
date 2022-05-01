#include <stdio.h>
#include <stdlib.h>

int main (void) {


int idade; 

    printf ("Insira aqui a sua idade:\n");
    scanf ("%i", &idade);


if (idade >= 20 && idade <=40) {
    printf ("Deu certo\n");
} else {
    printf ("Nao deu certo\n");
}

    system ("pause");
    return 0;
}