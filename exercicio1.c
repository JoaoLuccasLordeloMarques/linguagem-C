#include <stdio.h> 

int main()
{

 int num1; 
 int num2;
 int resultado; 
 printf ("escreva o 1 numero da operacao:\n");
 scanf ("%i", &num1);

 printf ("escreva o 2 numero da operacao:\n");
 scanf ("%i", &num2);

resultado = num1 / num2;

      if (num1 <= 0)
      printf ("nao e possivel tal operecao\n");
      if (num2 <= 0)
      printf ("nao e possivel tal operecao\n");
    
else {
    if (num1 % num2 == 0)
    printf ("O valor da divisao e %i\n", resultado);  
    else
    printf ("A divisao nao e possivel\n");
}

return 0;

}