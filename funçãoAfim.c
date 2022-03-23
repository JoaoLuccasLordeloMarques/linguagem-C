#include <stdio.h> 

int main ()
{

      //Lordelo22: Função Afim 

      int valordef; 
      int valordea;
      int valordeb;
      int valordex;

      printf ("Coloque o valor de A:\n");
      scanf ("%i", &valordea);

      printf ("Coloque o valor de X:\n");
      scanf ("%i", &valordex); 

      printf ("Coloque o valor de B\n");
      scanf ("%i", &valordeb); 

      valordef = valordea * valordex + valordeb; 

      printf ("O valor de F e %i", valordef);

      return 0; 

}

