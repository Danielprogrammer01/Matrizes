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
    int quantidade = 4;         // QUANTIDADE DE ALUNOS
    int linha = quantidade;     // CADA LINHA UM CONJUNTO DE NOTAS DE DETERMINADO ALUNO
    int coluna = 3;             // CADA COLUNA UMA NOTA (1ª NOTA DE TODOS OS ALUNOS), (2ª NOTA DE TODOS OS ALUNOS), ETC.
    char nome[quantidade][200]; // VETOR TIPO STRING
    float notas[linha][coluna]; // MATRIZ
    int soma = 0;
    float media[quantidade];

    for (i = 0; i < linha; i++)
    {
        printf("\nDigite o nome do %dº aluno: ", i + 1);
        gets(nome[i]);

        for (j = 0; j < coluna; j++)
        {

            printf("\nDigite a %dª nota: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }

        media[i] = (float)soma / (float)j;
        soma = 0;

        setbuf(stdin, 0);
    }

    system("cls || clear");

    for (i = 0; i < linha; i++)
    {
        printf("\nNome do %dº aluno: %s\n", i + 1, nome[i]);

        for (j = 0; j < coluna; j++)
        {
            printf("\n%dª nota: %.1f", j + 1, notas[i][j]);
        }

        printf("\nMédia: %.1f", media[i]);
        printf("\n");
    }

    return 0;
}