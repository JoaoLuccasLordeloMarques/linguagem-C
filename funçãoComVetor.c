#include <stdio.h>
#include <stdlib.h> 

int main (void) {


  int vetor[10] = {1024,8,256,4,32,128,2,512,64,2048}; 
  int i;
   
  void ordemCrescente (int vetor[], int n); 

  ordemCrescente (vetor, 10);

  for (i = 0; i < 10; ++i) {
           printf("%i\n", vetor[i]);   
       }

  system ("pause");
  return 0; 
}
void ordemCrescente (int vetor [], int n) {

   int j, i, temporaria; 

   for (i = 0; i < n; ++i) {
       for (j = i + 1; j < n; ++j) {
          if (vetor [i] > vetor [j]) {
             temporaria = vetor[i];
             vetor [i] = vetor[j];
             vetor[j] = temporaria; 
          }
       }
   }

}