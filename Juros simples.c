#include <stdio.h> 

int main() 
{

    //Lordello22: Juros Simples 

    int Juros; 
    int Capital;
    int taxa; 
    int tempo; 

    printf ("Insira aqui o seu Capital:\n");
    scanf ("%i", &Capital); 

    printf ("Insira aqui a sua Taxa:\n");
    scanf ("%i", &taxa); 

    printf ("Insira aqui o Tempo:\n"); 
    scanf ("%i", &tempo);

    Juros = Capital * taxa * tempo;

    printf ("O seu Juros é de %i", Juros); 

    return 0; 

}    