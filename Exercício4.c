#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int numeros[5];
    int impares = 0;
    int pares = 0;
    int negativos = 0;
    int maior = 0;
    int menor = 999999999;
    float mediaPar = 0;
    float mediaGeral = 0;
    int somaPar = 0;
    int somaGeral = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d� n�mero:", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 != 0)
        {
            impares++;
        }

        if (numeros < 0)
        {
            negativos++;
        }

        maior = maior > numeros[i] ? maior : numeros[i];
        menor = menor < numeros[i] ? menor : numeros[i];

        if (numeros[i] % 2 == 0)
        {
            pares++;
            somaPar += numeros[i];
        }

        somaGeral += numeros[i];
    }
    mediaPar = somaPar /(float)pares;
    mediaGeral = somaGeral/ (float)i;


    printf("Quantidade de n�meros �mpares: %d\n",impares);
    printf("Quantidade de npumeros negativos: %d\n",negativos);
    printf("Maior n�mero: %d\n",maior);
    printf("Menor n�mero: %d\n",menor);
    printf("M�dia dos n�meros pares: %.2f\n",mediaPar);
    printf("M�dia dos n�meros inserido: %.2f\n",mediaGeral);
    
    getchar();
    return 0;
}