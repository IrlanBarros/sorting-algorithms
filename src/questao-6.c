/************************************************************************************************************
*
*    6) Selection Sort (implementação base) (0.5 valor)
*       Implemente void selectionSort(int *V, int n) conforme a ideia de “selecionar o menor e colocar na
*       posição correta”.
*
*************************************************************************************************************/

#include <stdio.h>

void swap(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
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
    int v[] = {3, 5, 1, 9, 0, 4, 2, 10, 5};

    printf("Valores antes da ordenação:\n");
    print(v, 9);

    selectionSort(v, 9);

    printf("\n\nValores após a ordenação:\n");
    print(v, 9);
}