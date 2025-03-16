#include <string.h>
#include <stdio.h>

int romanToInt(char *s)
{
    int tam = strlen(s);
    int retorno = 0;

    for (int i = 0; i < tam; i++)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V' || s[i + 1] == 'X')
                retorno -= 1;
            else
                retorno += 1;
        }
        else if (s[i] == 'V')
            retorno += 5;
        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'L' || s[i + 1] == 'C')
                retorno -= 10;
            else
                retorno += 10;
        }
        else if (s[i] == 'L')
            retorno += 50;
        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D' || s[i + 1] == 'M')
                retorno -= 100;
            else
                retorno += 100;
        }
        else if (s[i] == 'D')
            retorno += 500;
        else if (s[i] == 'M')
            retorno += 1000;
    }
    return retorno;
}

int main()
{
    int teste1 = romanToInt("A");   // Esperado: 0
    int teste2 = romanToInt("I");   // Esperado: 1
    int teste3 = romanToInt("IX");  // Esperado: 9
    int teste4 = romanToInt("V");   // Esperado: 5
    int teste5 = romanToInt("XL");  // Esperado: 40
    int teste6 = romanToInt("X");   // Esperado: 10
    int teste7 = romanToInt("L");   // Esperado: 50
    int teste8 = romanToInt("CD");  // Esperado: 400
    int teste9 = romanToInt("C");   // Esperado: 100
    int teste10 = romanToInt("D");  // Esperado: 500
    int teste11 = romanToInt("M");  // Esperado: 1000
    int teste12 = romanToInt("MM"); // Esperado: 2000

    printf("Teste 1: %d\n", teste1);
    printf("Teste 2: %d\n", teste2);
    printf("Teste 3: %d\n", teste3);
    printf("Teste 4: %d\n", teste4);
    printf("Teste 5: %d\n", teste5);
    printf("Teste 6: %d\n", teste6);
    printf("Teste 7: %d\n", teste7);
    printf("Teste 8: %d\n", teste8);
    printf("Teste 9: %d\n", teste9);
    printf("Teste 10: %d\n", teste10);
    printf("Teste 11: %d\n", teste11);
    printf("Teste 12: %d\n", teste12);
    

    return 0;
}
