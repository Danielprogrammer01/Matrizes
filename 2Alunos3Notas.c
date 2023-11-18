#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    int quantidade = 2;
    int linha = 2; //NOMES
    int coluna = 3; //NOTAS
    float notas [linha] [coluna]; // MATRIZ
    char nome [quantidade] [200]; //VETOR TIPO STRING

    for (i = 0; i < linha; i++)
    {
        printf("\nDigite o nome do %d aluno: ", i+1);
        gets(nome[i]);

        for (j = 0; j < coluna; j++)
        {
            
            printf("\nDigite a %d nota: ", j+1);
            scanf("%f", &notas[i][j]);

        }
        
        fflush(stdin);

        system("cls || clear");
    }

    for (i = 0; i < linha; i++)
    {
        printf("\nNome do %dº aluno: %s\n", i+1, nome[i]);

        
        for (j = 0; j < coluna; j++)
        {
            printf("\n%d nota: %.1f",j+1, notas[i][j]);
        }
        
            printf("\n");
    }
 
    return 0;
}