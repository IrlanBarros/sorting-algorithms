/************************************************************************************************************
*
*    5) Bubble Sort com parâmetro de ordem (1 valor)
*       Implemente void bubbleSortOrdem(int v[], int n, int ordem):
*        • ordem = 1 crescente
*        • ordem = -1 decrescente
*       Teste com: n=0, n=1, repetidos, mistura de positivos/negativos.
*
*************************************************************************************************************/

#include <stdio.h>

void swap(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
}   

void bubbleSortOrdem(int v[], int n, int ordem)
{
    int i,j;

    if (n <= 1)
    {
        printf("\nNão precisa ser ordenado!\n");
        return;
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if (
                (ordem == 1 && v[j] > v[j+1]) ||
                (ordem == -1 && v[j] < v[j+1])
            ) {
                swap(&v[j], &v[j+1]);
            }
        }
    }
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
    int v[] = {3, 5, -1, 1, 9, 0, -11, 4, 2, 10, 5, -3};

    printf("Valores antes da ordenação:\n");
    print(v, 12);

    printf("\n** Bubble Sort ordem crescente **");
    bubbleSortOrdem(v, 12, 1);

    printf("\n\nValores após a ordenação:\n");
    print(v, 12);

    int v1[] = {3, 5, -1, 1, 9, 0, -11, 4, 2, 10, 5, -3};

    printf("\n** Bubble Sort ordem decrescente **");
    bubbleSortOrdem(v1, 12, -1);

    printf("\n\nValores após a ordenação:\n");
    print(v1, 12);

    int v2[0];
    int v3[] = {1};

    bubbleSortOrdem(v2, 0, 1);
    bubbleSortOrdem(v3, 1, 1);
}