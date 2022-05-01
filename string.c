#include <stdio.h>
#include <stdlib.h>


int main (void) {


  char teste [] = {'a', 'm', 'o', 'r'};

  for (int x = 0; x < 4; ++x) {
      printf ("%c", teste[x]);
  }
      printf("\n");

    system ("pause");
    return 0;
}