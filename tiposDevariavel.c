#include <stdio.h> 

int main ()
{

   // Revisao dos tipos de varíaveis 
   // Char: 

char variavelChar = 'a'; 

  printf ("O valor Original da vairavel Char e %c\n", variavelChar);
  printf ("Insira o valor desejado para Char:");
  scanf ("%c", &variavelChar);
  printf ("O valor escolhido foi %c\n", variavelChar);

 
/*
  Long Int é uma variavel inteira que consegue ter o dobro de memoria física do que a normal. 
  Também é possível ter a const int, sendo uma variável que não pode ser trocado depois da execução do progama. 
  A const está presente em todos os tipos de variaveis (flor, char...) 
  Tambem existe a unsigned limitando os números somente para positivos.
  A unigned está presente em todos os tipos de variaveis 
*/

 long int variavelInteira = 10500000;
  
  printf ("O valor original da variavel Inteira e %i\n", variavelInteira);
  printf ("Insira o valor desejado para Inteira:");
  scanf ("%i", &variavelInteira);
  printf ("O valor escolhido foi %i\n", variavelInteira);

 const int variavelconst = 3; 
  
  printf ("O valor da variavel const e %i\n", variavelconst);

// Float 

float variavelfloat = 3.14;
printf ("O valor da variavel float e %f\n", variavelfloat);
printf ("Insira o valor deseado para Float:");
scanf ("%f", &variavelfloat);
printf ("O valor escolhido foi %f\n", variavelfloat);

/* Double
A variavel Double é como se fosse uma "long int", já que é uma variavel do tipo float que possui mais precisão depois da vírgula
Também aceita a Long Double e Const Double.
*/

double variaveldouble = 3.14;
printf ("O valor da variavel Double e %f\n", variaveldouble);
printf ("Insira o valor desejado para double:");
scanf ("%f", &variaveldouble);
printf ("O valor desejado foi %f", variaveldouble);

return 0;

}