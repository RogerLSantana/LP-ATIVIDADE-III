#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    char nome[5][200];
    int idade[5];
    float notas[5][3];
    int soma = 0;
    float media[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite seu nome:");
        gets(nome[i]);
        fflush(stdin);

        printf("Digite sua idade:");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite uma nota:");
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        fflush(stdin);
        media[i] = soma / (float)j;
        soma = 0;
    }

    system("cls || clear");

    for (i = 0; i < 5; i++)
    {
        printf("Nome: %s\n", nome[i]);
        printf("Idade: %d\n", idade[i]);
        for (j = 0; j < 3; j++)
        {
            printf("%d nota: %.2f\n", j + 1, notas[i][j]);
        }
        printf("Média:%.2f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("Aprovado!\n");
        }
        else if (media[i] >= 5)
        {
            printf("Recuperação!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }

        printf("\n");
    }

    getchar();
    return 0;
}