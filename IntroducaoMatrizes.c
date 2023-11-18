#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numeros [2] [2];
    int i;
    int j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Linha %d, Coluna %d: ", i+1, j+1);
            scanf("%d", &numeros[i][j]);
        }
        
    }

    printf("\n");
       
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", numeros [i][j]);
        }

        printf("\n");
    }
    
    return 0;
}