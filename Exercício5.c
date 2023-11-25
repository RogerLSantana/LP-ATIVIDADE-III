#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int codigo = 0;
    int contagemPosicao = 0;
    int quantidade[999];
    char NomeProduto[999][200];
    float valor[999];
    float totalvendas[999];

    do
    {
        printf("Número 1 para adicionar uma venda \n");
        printf("número 2 para sair do menu e exibir o total das vendas realizadas. \n");
        printf("\n");

        printf("Digite o código:");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            fflush(stdin);
            printf("Digite o nome do produto:");
            gets(NomeProduto[contagemPosicao]);

            fflush(stdin);

            printf("Digite o valor do produto:");
            scanf("%f", &valor[contagemPosicao]);

            printf("Digite a quantidade:");
            scanf("%d", &quantidade[contagemPosicao]);

            totalvendas[contagemPosicao] = valor[contagemPosicao] * quantidade[contagemPosicao];

            contagemPosicao++;
            break;
        case 2:
            printf("Atendimento encerrado. \n");
            system("cls || clear");
            break;
        default:
            printf("Código inválido.\n");

            break;
        }
        fflush(stdin);

    } while (codigo != 2);

    for (i = 0; i < contagemPosicao; i++)
    {
        printf("Nome do produto: %s \t Valor: R$%.2f \t Quantidade: %d \n", NomeProduto[i], valor[i], quantidade[i]);
        printf("Total: %.2f \n", totalvendas[i]);
        printf("\n");
    }

    getchar();
    return 0;
}