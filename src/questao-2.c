/************************************************************************************************************
*
*    2) Bubble Sort instrumentado (comparações e trocas) (0.5 valor)
*       Implemente Bubble Sort com:
*        • comparacoes++ a cada comparação
*        • trocas++ a cada swap
*       Imprima comparacoes e trocas ao final.
*
*************************************************************************************************************/

#include <stdio.h>

void swap(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
}

void bubbleSort(int v[], int n)
{
    int i,j;
    int comparacoes = 0;
    int trocas = 0;

    printf("\n\n** Execução do Bubble Sort **");

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            comparacoes++;
            if(v[j] > v[j+1])
            {
                swap(&v[j], &v[j+1]);
                trocas++;
            }
        }
    }

    printf("\nQuantidade de comparações: %d", comparacoes);
    printf("\nQuantidade de trocas: %d", trocas);
}

void print(int v[], int n)
{
    int i = 0;
 
    printf("[");
    for(i = 0; i < n; i++)
    {
        if(i < n-1)
            printf("%d, ", v[i]);
        else
            printf("%d", v[i]);
    }
    printf("]\n");
}

int main()
{
    int v[] = {3, 5, 1, 9, 0, 4, 2, 10, 5};

    printf("Valores antes da ordenação:\n");
    print(v, 9);

    bubbleSort(v, 9);

    printf("\n\nValores após a ordenação:\n");
    print(v, 9);
}