#include <stdio.h> 

int main() 
{

    int JoaoIdade = 18; 
    int MarcelaIdade =20;
    int MarcosIdade =23; 
    int CesarIdade =55;
    int TatyIdade =44;

    int Idadedosfilhos; 
    Idadedosfilhos = JoaoIdade + MarcelaIdade + MarcosIdade;

    int IdadeDaFamilia; 
    IdadeDaFamilia = JoaoIdade + MarcelaIdade + MarcosIdade + CesarIdade + TatyIdade;

    int Idadedospais;
    Idadedospais = CesarIdade + TatyIdade;

    int subfilhospais;
    subfilhospais = Idadedospais - Idadedosfilhos;

    int multiplicarfilhospais;
    multiplicarfilhospais = Idadedospais * Idadedosfilhos;   

    int divifilhospais;
    divifilhospais = Idadedospais / Idadedosfilhos; 

    printf ("a idade dos filhos e %i\n", Idadedosfilhos);

    printf ("a idade dos pais e %i\n", Idadedospais);

    printf ("a idade da familia e %i\n", IdadeDaFamilia);

    printf ("a diferenca da idade dos pais para os filhos e de %i\n", subfilhospais);
    
    printf ("a multiplicacao da idade dos pais para os filhos e de %i\n", multiplicarfilhospais);

    printf ("a divisão da idades dos pais pela dos filhos e de %i\n", divifilhospais);

    return 0;

}