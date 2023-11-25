#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    int i,j;
    int quantidadeDeMusicos = 3;
    int quantidadeDeBandas = 2;
    char bandas [quantidadeDeBandas] [quantidadeDeMusicos] [200]; // Matriz paras as bandas e músicos.
    char nomeDaBanda [quantidadeDeBandas] [200]; // Vetor

    //Solicitando e Armazenando Dados
    
    for (i = 0; i < quantidadeDeBandas; i++)
    {
        
        printf("\nDigite o nome da %dª banda: ", i+1);
        gets(nomeDaBanda[i]);

        for(j = 0; j < quantidadeDeMusicos; j++)
        {
        
            printf("\n%dº músico: ", j+1);
            gets(bandas[i][j]);

        }

        fflush(stdin);//Limpando cash
        
        printf("\n");
    }

    system("cls || clear");

    //Exibindo na tela

    for (i = 0; i < quantidadeDeBandas; i++)
    {
        
        printf("\n%dª banda: %s", i+1,nomeDaBanda[i]);
        printf("\n");
        printf("\nMúsicos: ");
        printf("\n");

        for(j = 0; j < quantidadeDeMusicos; j++)
        {
        
            printf("\n%s", bandas[i][j]);

        }

        printf("\n");

    }
    
    return 0;
}