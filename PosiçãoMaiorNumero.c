#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    int linha = 2;
    int coluna = 2;
    int matriz [linha][coluna];
    int maiorNumero = INT_MIN;
    int linhaMaiorNumero;
    int colunaMaiorNumero;

    for (i = 0; i < linha ; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("Digite um n�mero: ");
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maiorNumero)
            {
                maiorNumero = matriz[i][j];
                linhaMaiorNumero = i;
                colunaMaiorNumero = j;
            }
            
        }   
    }


    printf("\nMaior n�mero: %d", maiorNumero);
    printf("\nPosi��o: Linha %d, Coluna %d", linhaMaiorNumero, colunaMaiorNumero);
    printf("\n");

    return 0;
}