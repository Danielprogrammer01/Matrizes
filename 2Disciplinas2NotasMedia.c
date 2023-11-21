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
    int quantidadeDisciplinas = 3;
    int quantidadeNotas = 2;
    int linha = quantidadeDisciplinas;
    int coluna = quantidadeNotas; 
    char disciplina [quantidadeDisciplinas] [200];
    float notas [linha] [coluna];
    int soma = 0;
    float media[quantidadeDisciplinas];

    for (i = 0; i < quantidadeDisciplinas; i++)
    {
        
        printf("\nDigite o nome da %dª disciplina: ", i+1);
        gets(disciplina[i]);

        for (j = 0; j < quantidadeNotas; j++)   
        {

            printf("\nDigite a %dª nota:", j+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }

        media[i] = (float)soma / (float) j;
        soma = 0;

        setbuf(stdin, 0);

        printf("\n");
    } 

    system("cls || clear");

    for (i = 0; i < quantidadeDisciplinas; i++)
    {
        
        printf("\n%s\n", disciplina[i]);

        for (j = 0; j < quantidadeNotas; j++)   
        {

            printf("\n%dª nota: %.1f", j+1, notas[i][j]);
        }

        printf("\nMédia: %.1f", media[i]);

        setbuf(stdin, 0);

        printf("\n");
    } 

    return 0;
}