#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    long long comparacoes;
    long long trocas;
} Metrics;

static void print_array(const int v[], int n) 
{
    printf("[");

    for (int i = 0; i < n; i++) 
    {
        printf("%d", v[i]);

        if (i < n - 1) 
            printf(", ");
    }

    printf("]");
}

static void swap_int(int *a, int *b) 
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSortOrdem(int *V, int n, int ordem, Metrics *m)
{
    int i, j, menor, maior;

    for(i = 0; i < n-1; i++)
    {
        menor = i;
        maior = i;

        for(j = i+1; j < n; j++)
        {
            m->comparacoes++;

            if(V[j] < V[menor] && ordem == 1)
                menor = j;

            else if(V[j] > V[maior] && ordem == -1)
                maior = j;
        }

        if (i != menor && ordem == 1)
        {
            swap_int(&V[i], &V[menor]);
            m->trocas++;
        }

        else if(i != maior && ordem == -1)
        {
            swap_int(&V[i], &V[maior]);
            m->trocas++;
        }

    }
}

void testar(int v[], int n, const char *nome) 
{
    Metrics m = {0, 0};

    printf("\n\n============================================");
    printf("\nCaso: %s\n", nome);

    printf("Antes: \n");
    print_array(v, n);

    selectionSortOrdem(v, n, 1, &m);

    printf("\nDepois: \n");
    print_array(v, n);

    printf("\nComparacoes: %lld | Trocas: %lld\n", m.comparacoes, m.trocas);
    printf("\n============================================");
}

int main()
{
    int v0[] = {};
    int v1[] = {7};
    int v2[] = {1,2,3,4,5};
    int v3[] = {5,4,3,2,1};
    int v4[] = {3,1,3,2,3};

    testar(v0, 0, "Vazio");
    testar(v1, 1, "1 elemento");
    testar(v2, 5, "Ja ordenado");
    testar(v3, 5, "Inverso");
    testar(v4, 5, "Repetidos");

    return 0;
}