/************************************************************************************************************
*
*    11) Insertion Sort (implementação base) (1 valor)
*       Implemente void insertionSort(int *V, int n) usando:
*         • chave = V[i]
*         • deslocamentos enquanto j > 0 && chave < V[j-1]
*         • inserção final da chave na posição correta.
*
*************************************************************************************************************/

#include <stdio.h>

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

    printf("\n** EXECUÇÃO DO INSERTION SORT **");
    insertionSort(v, 12);

    printf("\n\nValores após a ordenação:\n");
    print(v, 12);
}