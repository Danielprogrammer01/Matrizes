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
int quantidadeDeBandas = 2;
int quantidadeDeMusicos = 3;
int linha = quantidadeDeBandas;
int coluna = quantidadeDeMusicos;
char bandas [linha][coluna][200];
char nomeDaBanda [quantidadeDeMusicos] [200];

for (i = 0; i < quantidadeDeBandas; i++)
    {
        
        printf("\nDigite o nome da %dª banda: ", i+1);
        gets(nomeDaBanda[i]);

        for (j = 0; j < quantidadeDeMusicos; j++)   
        {

            printf("\nDigite o nome do %dª integrante:", j+1);
            gets(bandas[i][j]);
        
        }

        setbuf(stdin, 0);

        printf("\n");
    } 

    system("cls || clear");

    
    for (i = 0; i < quantidadeDeBandas; i++)
    {
        
        printf("\n%dª Banda: %s", i+1, nomeDaBanda[i]);
        printf("\n");

        for (j = 0; j < quantidadeDeMusicos; j++)   
        {

            printf("\n%dª Integrante: %s", j+1, bandas[i][j]);
        
        }

        setbuf(stdin, 0);

        printf("\n");
    } 

    return 0;
}