#include <stdio.h>
#include <stdlib.h>

int main (void) {

float nota[5] = {0};
float total = 0;
float media = 0;

printf ("Insira 5 notas:");

for (int a = 0; a < 5; ++a)
    scanf ("%f", &nota[a]);
for (int b = 0; b < 5; ++b)
    total += nota[b];

media = total / 5;

printf ("A media do aluno e %f\n", media);

system ("pause");
return 0;

}