/************************************************************************************************************
*
*    12) Traçado (passo a passo) — Insertion Sort (0.5 valor)
*       Para o vetor [5, 3, 4, 1, 2], escreva o vetor ao final de cada iteração do for (i=1; i<n; i++).
*
*************************************************************************************************************/

#include <stdio.h>

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

void insertionSort(int *V, int n) 
{
    int i, j, chave; 

    for (i = 1; i < n; i++) 
    {
        chave = V[i];
        j = i;

        while (j > 0 && chave < V[j - 1]) 
        {
            V[j] = V[j - 1]; 
            j--; 
        }
        
        V[j] = chave;

        printf("\nVetor após a passada i = %d: \n", i);
        print(V, 5);
    }
}

int main()
{
    int v[] = {5, 3, 4, 1, 2};

    printf("Valores antes da ordenação:\n");
    print(v, 5);

    printf("\n** EXECUÇÃO DO INSERTION SORT **");
    insertionSort(v, 5);

    printf("\n\nValores após a ordenação:\n");
    print(v, 5);
}