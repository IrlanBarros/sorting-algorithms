/************************************************************************************************************
*
*    13) Insertion Sort instrumentado (comparações e movimentações) (1.5 valor)
*       Crie uma versão instrumentada que conte:
*         • comparacoes: apenas avaliações da condição do tipo chave < V[j-1]
*         • movimentacoes: atribuições no vetor V[...] = ... (inclui deslocamentos e a inserção final da chave)
*       Teste com vetores: ordenado, reverso, aleatório (n=20). Explique os resultados observados, especialmente no
*       caso “quase ordenado”.
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
    int comparacoes = 0;
    int movimentacoes = 0; 

    for (i = 1; i < n; i++) 
    {
        chave = V[i];
        j = i;

        while (j > 0) 
        {
            comparacoes++;

            if(chave < V[j - 1])
            {
                V[j] = V[j - 1]; 
                movimentacoes++;
                j--; 
            }

            else break;
        }
        
        V[j] = chave;
        movimentacoes++;
    }

    printf("\nNúmero de comparações: %d\n", comparacoes);
    printf("Número de movimentações: %d", movimentacoes);
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

    printf("\n\n*** INSERTION SORT ORDENANDO OS TRÊS VETORES ***\n");

    printf("\nVetor ordenado:");
    insertionSort(vetorOrdenado, 20);
    
    printf("\n\nVetor reverso:");
    insertionSort(vetorReverso, 20);

    printf("\n\nVetor aleatório:");
    insertionSort(vetorAleatorio, 20);

    printf("\n\nVetores ordenado, reverso e aleatório, respectivamente, após as ordenações:\n");
    print(vetorOrdenado, 20);
    print(vetorReverso, 20);
    print(vetorAleatorio, 20);
}