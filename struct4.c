#include <stdio.h>
#include <stdlib.h>


int main (void){


 struct horario {
     int horas;
     int minutos;
     int segundos;
 } agora = {14, 38, 25}; 

   printf ("%i:%i:%i\n", agora);

struct horario depois = {.segundos = 55, .horas = 14, .minutos = 47};
 
   printf ("%i:%i:%i\n", depois);  

    system ("pause");
    return 0;
}