#include <stdio.h>
#include <stdlib.h>

struct horario {
    int horas; 
    int minutos;
    int segundos;
};

int main (void) {

struct horario teste (struct horario x);

struct horario agora;
    agora.horas = 14;
    agora.minutos = 14;
    agora.segundos = 30; 

struct horario proxima;
proxima = teste (agora); 

      printf ("%i:%i:%i\n", proxima.horas,
                          proxima.minutos,
                          proxima.segundos);
  
  
   system ("pause");
   return 0;
}
struct horario teste (struct horario x) {

      printf ("%i:%i:%i\n", x.horas,
                          x.minutos,
                          x.segundos);

    x.horas = 14;
    x.minutos = 27;
    x.segundos = 45;

  return x;
}