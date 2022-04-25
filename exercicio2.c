#include <stdio.h> 
#include <stdlib.h>

int main (void) {

  int numeroDeAlunos = 4;
  int numeroDeBimestres = 4;

float notasDosAlunos [numeroDeAlunos][numeroDeBimestres] = {0};
float mediaDosAlunos [numeroDeAlunos] = {4};

float media = 0;

printf ("Insira as 4 notas do 1º aluno:\n");

for (int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
     for (int notas = 0; notas < numeroDeBimestres; ++notas) {
          scanf("%f", &notasDosAlunos[aluno][notas]); 
          media += notasDosAlunos[aluno][notas];  
         }
       mediaDosAlunos [aluno] = media / numeroDeBimestres;
       media = 0;
       printf ("insira as 4 notas do %i: \n", aluno + 2);
      }
      for (int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
          printf ("a media do aluno %i eh %2.f\n", aluno + 1, mediaDosAlunos[aluno]);
     }
      


printf ("%f\n", notasDosAlunos);


return 0;

}