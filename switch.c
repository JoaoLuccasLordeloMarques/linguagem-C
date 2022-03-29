#include <stdio.h> 

int main () 
{

    int nome;

    printf ("Insira o numero do rapper abaixo: (Matue = 1, Travis = 2, Drake = 3, Felp22 = 4 e Baco = 5\n"); 
    scanf ("%i", &nome); 

    switch (nome) {
            case 1:
            printf ("as melhores do Tue sao: Anos Luz, Boomzin e Maquina do Tempo\n");
            break; 

            case 2: 
            printf ("as melhores do Travis sao: Impossible, Sicko Mode e Goosebumps\n");
            break;

            case 3: 
            printf ("as melhores do Drake sao: Fair Trade, In My Feelings e God's Plan\n");
            break; 

            case 4: 
            printf ("as melhores do Felp22 sao: Linda e Doida, Tropa do Papai e Tempo Bom");

            case 5:
            printf ("as melhores do Baco sao: Flamingos, Banho de Sol e Dois Amores");
            break;
    
            default:
            printf ("opcao nao valida");
            break; 
  
    } 

    return 0; 

}

