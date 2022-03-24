#include <stdio.h> 

int main ()
{

    // Lordello22: Fatorial 

    int fatorial = 14; 
    int resposta = 1; 

    for ( ; fatorial >= 1; --fatorial) {

         resposta *= fatorial;

    }

    printf ("O valor do fatorial de 14 e %i", resposta);

    return 0;

}