/************************************************************************************************************
*
*    4) Comparação experimental: sem otimização vs early stop (1 valor)
*       Gere 3 vetores com n=20: (i) já ordenado, (ii) reverso, (iii) aleatório. Rode Bubble normal e Bubble com early stop e
*       compare as métricas. Qual caso reduz mais operações com early stop? A reposta dessa questão deve ser gravada em
*       vídeo de até 3 minutos. A sugestão é usar a app Loom como extensão do Google Chome. O link do video deve ser enviado
*       no Classroom no local indicado.
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

void bubbleSortOptimizado(int v[], int n)
{
    int i,j;
    int comparacoes = 0;
    int trocas = 0;
    int houveTroca = 1;

    printf("\n\n** Execução do Bubble Sort Otimizado **");

    for(i = 0; i < n-i-1; i++)
    {
        houveTroca = 0; 

        for(j = 0; j < n-1; j++)
        {
            comparacoes++;
            if(v[j] > v[j+1])
            {
                swap(&v[j], &v[j+1]);
                trocas++;
                houveTroca = 1; 
            }
        }

        if(!houveTroca) break;
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
    int vetorOrdenado[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int vetorReverso[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int vetorAleatorio[] = {18, 3, 9, 5, 10, 13, 0, 4, 12, 1, 19, 15, 11, 2, 14, 6, 16, 7, 17, 8};

    printf("Vetores ordenado, reverso e aleatório, respectivamente, antes das ordenações:\n");
    print(vetorOrdenado, 20);
    print(vetorReverso, 20);
    print(vetorAleatorio, 20);

    printf("\n\n*** BUBBLE SORT BÁSICO ORDENANDO OS TRÊS VETORES ***\n");

    bubbleSort(vetorOrdenado, 20);
    bubbleSort(vetorReverso, 20);
    bubbleSort(vetorAleatorio, 20);

    printf("\n\nVetores ordenado, reverso e aleatório, respectivamente, após as ordenações:\n");
    print(vetorOrdenado, 20);
    print(vetorReverso, 20);
    print(vetorAleatorio, 20);

    int vetorOrdenado1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int vetorReverso1[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int vetorAleatorio1[] = {18, 3, 9, 5, 10, 13, 0, 4, 12, 1, 19, 15, 11, 2, 14, 6, 16, 7, 17, 8};

    printf("\n\n*** BUBBLE SORT OTIMIZADO ORDENANDO OS TRÊS VETORES ***\n");

    bubbleSortOptimizado(vetorOrdenado1, 20);
    bubbleSortOptimizado(vetorReverso1, 20);
    bubbleSortOptimizado(vetorAleatorio1, 20);

    printf("\n\nVetores ordenado, reverso e aleatório, respectivamente, após as ordenações:\n");
    print(vetorOrdenado1, 20);
    print(vetorReverso1, 20);
    print(vetorAleatorio1, 20);
}