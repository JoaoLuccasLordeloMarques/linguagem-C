#include <stdio.h>
#include <stdlib.h>

int main (void) {

  struct horario 
  {
      int horas;
      int minutos;
      int segundos;
      int teste;
  };

  struct horario agora;
  agora.horas = 12;
  agora.minutos = 36;
  agora.segundos = 25;  

       printf ("Hora atual eh %i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

  struct horario depois;
  depois.horas = 12 + 10;
  depois.minutos = agora.minutos + 10;
  depois.segundos = agora.segundos;

       printf("Daqui a 10hrs e 10minutos vai ser %i:%i:%i\n", depois.horas, depois.minutos, depois.segundos);

  struct horario estrutura;
  estrutura.teste = 55 + 100 / 2;

       printf ("Testando a estrutura %i\n", estrutura.teste);

  system ("pause");
  return 0;
}