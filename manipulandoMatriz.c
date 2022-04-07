#include <stdio.h>
#include <stdlib.h>

int main (void) {

int matriz [5][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};


for (int a = 0; a < 5; ++a) {
for (int b = 0; b < 5; ++b) {
     printf("%i\n", matriz[a][b]); }}
     printf ("\n");

system ("pause");
return 0;
}