/************************************************************************************************************
*
*    Implemente void bubbleSort(int v[], int n) para ordenar em ordem crescente. Use troca com variável
*    temporária (swap). (Dica: cuidado com os limites do laço interno para não acessar v[j+1]fora do vetor.)
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

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(v[j] > v[j+1])
                swap(&v[j], &v[j+1]);
        }
    }
}

void print(int v[], int n)
{
    int i = 0;
 
    for(i = 0; i < n; i++)
    {
        if(i < n-1)
            printf("%d, ", v[i]);
        else
            printf("%d", v[i]);
    }
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