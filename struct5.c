#include <stdio.h>
#include <stdlib.h>

int main (void) {



  struct horario {
      int horas;
      int minutos;
      int segundos;
  };

  struct horario teste[5] = 
  {{14, 50, 25},{11, 10, 00},{17, 35, 55},{16, 40, 25},{15, 20, 30}}; 

  for (int x = 0; x < 5; ++x) {
      printf ("%i:%i:%i\n", teste[x]); 
  }

    system ("pause");
    return 0;
}