#include <stdio.h>

int main ()
{
    
    //Lordello22 = Função Afim(Decimal) 

    int f; 
    float a; 
    float x;
    int b;

    printf ("Insira aqui o valor de F:\n");
    scanf ("%i", &f);

    printf ("Insira aqui o valor de A:\n");
    scanf ("%f", &a);

    printf ("Insira aqui o valor de B:\n"); 
    scanf ("%i", &b); 

    x = f / a - b; 

    printf ("O valor de X é %f", x);
    
    return 0; 

}