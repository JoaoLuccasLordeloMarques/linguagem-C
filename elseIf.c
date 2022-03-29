#include <stdio.h> 

int main () 
{

   int idade; 

   printf ("Infome sua idade abaixo:\n");
   scanf ("%i", &idade); 

   if (idade <= 5) 
   
       printf("Voce e um bebe\n");
   
   else if (idade >= 5 && idade <= 10)
    
       printf("Voce e uma crianca\n");
    
    else if (idade >= 10 && idade <= 18)
       
       printf("Voce e um adolescente");

    else if (idade >= 18 && idade <= 60)
       
      printf ("voce e uma adulto"); 

    else 
     
      printf ("voce e um idoso ");

return 0;

}