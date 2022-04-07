#include <stdio.h> 
#include <stdlib.h>

int main (void) {
 
int matriz[2] [2] = {{1, 2},
                     {3, 4}};

printf ("%i\n", matriz[0][0]);
printf ("%i\n", matriz[0][1]);
printf ("%i\n", matriz[1][0]);
printf ("%i\n", matriz[1][1]);

system ("pause");
return 0;

}