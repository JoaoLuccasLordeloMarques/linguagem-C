#include <stdio.h> 

int main ()
{

   float vpassagem;
   int passagens; 
   int semanas;  
   int dias; 
   int total; 

   printf ("Insira a quantidade de passagens:\n");
   scanf ("%i", &passagens); 

   printf ("Insira aqui a quantidade de semanas:\n");
   scanf ("%i", &semanas);

   printf ("Insira aqui a quantidade de dias:\n");
   scanf ("%i", &dias);

   printf ("Insira aqui o valor da passagem:\n");
   scanf ("%f", &vpassagem);

   total = vpassagem * passagens * dias * semanas; 

   printf ("O valor total que você vai gastar por mes e %i", total); 

   return 0; 

}