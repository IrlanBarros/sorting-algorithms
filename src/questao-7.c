/************************************************************************************************************
*
*    7) Traçado (passo a passo) — Selection Sort (0.5 valor)
*       Para o vetor [64, 25, 12, 22, 11], escreva o estado do vetor ao final de cada iteração do laço externo (i = 0, 1, 2,
*       3).
*
*************************************************************************************************************/

#include <stdio.h>

void swap(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
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

void selectionSort(int *V, int n)
{
    int i, j, menor;

    printf("\n\n** Execução do Selection Sort **");

    for(i = 0; i < n-1; i++)
    {
        menor = i;

        for(j = i+1; j < n; j++)
        {
            if(V[j] < V[menor])
                menor = j;
        }

        if (i != menor)
            swap(&V[i], &V[menor]);

        printf("\nPassada i = %d: ", i);
        print(V, n);
    }
}

int main()
{
    int v[] = {64, 25, 12, 22, 11};

    printf("Valores antes da ordenação:\n");
    print(v, 5);

    selectionSort(v, 5);

    printf("\n\nValores após a ordenação:\n");
    print(v, 5);
}