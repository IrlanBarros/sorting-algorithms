/************************************************************************************************************
*
*    8) Métricas no Selection Sort (1 valor)
*       Instrumente o Selection Sort com:
*         • comparacoes++ a cada comparação entre elementos
*         • trocas++ somente quando ocorrer troca real (quando menor != i)
*       Execute em (i) ordenado, (ii) reverso, (iii) aleatório, com n=20. Compare os resultados e explique por que o
*       número de operações tende a ser “mais constante” que no Bubble.
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
    int comparacoes = 0;
    int trocas = 0;

    printf("\n\n** Execução do Selection Sort **");

    for(i = 0; i < n-1; i++)
    {
        menor = i;

        for(j = i+1; j < n; j++)
        {
            comparacoes++;

            if(V[j] < V[menor])
                menor = j;
        }

        if (i != menor)
        {
            swap(&V[i], &V[menor]);
            trocas++;
        }
    }

    printf("\nNúmero de comparações: %d", comparacoes);
    printf("\nNúmero de trocas: %d", trocas);
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
    int vetorOrdenado[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int vetorReverso[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int vetorAleatorio[] = {18, 3, 9, 5, 10, 13, 0, 4, 12, 1, 19, 15, 11, 2, 14, 6, 16, 7, 17, 8};

    printf("Vetores ordenado, reverso e aleatório, respectivamente, antes das ordenações:\n");
    print(vetorOrdenado, 20);
    print(vetorReverso, 20);
    print(vetorAleatorio, 20);

    printf("\n\n*** SELECTION SORT ORDENANDO OS TRÊS VETORES ***\n");

    selectionSort(vetorOrdenado, 20);
    selectionSort(vetorReverso, 20);
    selectionSort(vetorAleatorio, 20);

    printf("\n\nVetores ordenado, reverso e aleatório, respectivamente, após as ordenações:\n");
    print(vetorOrdenado, 20);
    print(vetorReverso, 20);
    print(vetorAleatorio, 20);

    // O selection sort costuma ser mais constante no número de operações em relação ao Bubble sort, devido ao fato de que
    // a quantidade de comparações sempre vai ser a mesma em vetores de mesmo tamanho, independente da organização dos dados 
    // nos vetores. E o número de iterações do loop interno sempre vai derementando a cada passada do loop externo graças ao
    // trecho "j = i+1", o que resulta em um número de comparações sempre igual a comparações = n(n - 1) / 2. E no selection
    // não há otimizações (igual o early stop do bubble sort) que possam mudar o número de comparações. 
}