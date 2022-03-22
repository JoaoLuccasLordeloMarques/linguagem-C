#include <stdio.h> 

int main ()
{
    //Lordello22: Calculo da Área do Trapézio 

    int suabasemaior; 
    int suabasemenor;
    int altura; 
    int area; 

    printf ("Digite sua base maior:\n");
    scanf ("%i", &suabasemaior);

    printf ("Digite sua base menor:\n");
    scanf ("%i", &suabasemenor);

    printf ("Digite sua altura:\n"); 
    scanf ("%i", &altura); 

    area = suabasemaior + suabasemenor * altura /2; 

    printf ("Sua area e de %i", area);

  return 0; 

} 

