#include <stdio.h> 
#include <stdlib.h>

int main (void) {

   struct horario 
   {
       int horas;
       int minutos;
       int segundos;
   };

   struct horario agora;
   agora.horas = 12;
   agora.minutos =33;
   agora.segundos =45;

        printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);   

    system ("pause");
    return 0;
}