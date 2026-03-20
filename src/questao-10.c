/************************************************************************************************************
*
*    10) Selection Sort crescente/decrescente (0.5 valor)
*       Adapte o Selection Sort para receber ordem (1 crescente, -1 decrescente). Mostre os testes com o mesmo vetor nas duas
*       ordens e valide a saída.
*
*************************************************************************************************************/

#include <stdio.h>

void swap(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
}

void selectionSortOrdem(int *V, int n, int ordem)
{
    int i, j, menor, maior;

    printf("\n\n** Execução do Selection Sort **");

    for(i = 0; i < n-1; i++)
    {
        menor = i;
        maior = i;

        for(j = i+1; j < n; j++)
        {
            if(V[j] < V[menor] && ordem == 1)
                menor = j;

            else if(V[j] > V[maior] && ordem == -1)
                maior = j;
        }

        if (i != menor && ordem == 1)
            swap(&V[i], &V[menor]);

        else if(i != maior && ordem == -1)
            swap(&V[i], &V[maior]);
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

    printf("\n** Selection Sort ordem crescente **");
    selectionSortOrdem(v, 12, 1);

    printf("\n\nValores após a ordenação:\n");
    print(v, 12);

    int v1[] = {3, 5, -1, 1, 9, 0, -11, 4, 2, 10, 5, -3};

    printf("\n** Selection Sort ordem decrescente **");
    selectionSortOrdem(v1, 12, -1);

    printf("\n\nValores após a ordenação:\n");
    print(v1, 12);
}