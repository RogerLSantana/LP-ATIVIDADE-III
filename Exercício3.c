#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    int codigo = 0;
    char nomes[999][200];
    char telefones[999][200];
    int contagemPosicoes = 0;
    int i;

    do
    {
        printf("C�digo 1 para adicionar um n�mero \n");
        printf("C�digo 2 para mostrar os n�meros cadastrados e encerrar o software.\n");
        printf("\n");

        printf("Digite o c�digo desejado:");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            fflush(stdin);
            printf("Digite o nome:");
            gets(nomes[contagemPosicoes]);
            fflush(stdin);
            printf("Digite o telefone:");
            gets(telefones[contagemPosicoes]);
            fflush(stdin);

            contagemPosicoes++;
            break;

        case 2:
            printf("Programa encerrado.");
            system("cls || clear");
            break;
        default:
            printf("C�digo inv�lido!");
            break;
        }

    } while (codigo != 2);

    for (i = 0; i < contagemPosicoes; i++)
    {
        printf("Nome: %s \t Telefone: %s", nomes[i], telefones[i]);
        printf("\n");
    }

    getchar();
    return 0;
}