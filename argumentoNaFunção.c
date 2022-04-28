#include <stdio.h>
#include <stdlib.h>

int main (void) {

  void funcaoPrint (int x, int vetor[]);
  int x = 10;
  int vetor[3] = {10};

  funcaoPrint (x, vetor);
 
     printf("variavel X na funcao main eh %i\n", x);
     printf("o vetor na funcao main eh %i\n", vetor[3]);    

 system ("pause");
 return 0;   
}
void funcaoPrint (int x, int vetor[]) {

    x = x + 20; 
    vetor[1] = 20;

      printf ("variavel X na funcao print eh %i\n", x);
      printf ("o vetor na funcao print eh %i\n", vetor[1]);

}