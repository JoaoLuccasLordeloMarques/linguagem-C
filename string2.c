#include <stdio.h>


int main (void) {

 void concatenarStrings (char string1[], int t1,
                         char string2[], int t2,
                         char string3[]);


 char palavra1[] = {'p', 'a', 'o', ' '};
 char palavra2[] = {'m', 'o', 'r', 't', 'a', 'd', 'e', 'l', 'a'};
 char novaPalavra[13]; 

concatenarStrings(palavra1, 4, palavra2, 9, novaPalavra);


for (int x = 0; x < 13; ++x) {
    printf("%c", novaPalavra[x]);
}
    printf("\n");

    system ("pause");
    return 0;
}
void concatenarStrings (char string1[], int t1,
                         char string2[], int t2,
                         char string3[]) {

    int x;
    int z;

for (x = 0; x < t1; ++x) {
    string3[x] = string1[x];
for (z = 0; z < t2; ++z) {
    string3[t1 + z] = string2[z]; }
} 


}