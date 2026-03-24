#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    long long comparacoes;
    long long movimentacoes;
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

void insertionSort(int *V, int n, Metrics *m) 
{
    int i, j, chave;

    for (i = 1; i < n; i++) 
    {
        chave = V[i];
        j = i;

        printf("\n\ni=%d, chave=%d | antes: ", i, chave);
        print_array(V, n);

        while (j > 0) 
        {
            m->comparacoes++;

            if(chave < V[j - 1])
            {
                V[j] = V[j - 1]; 
                m->movimentacoes++;
                j--; 
            }

            else break;
        }
        
        V[j] = chave;
        m->movimentacoes++;

        printf("\ni=%d, chave=%d | depois: ", i, chave);
        print_array(V, n);
    }

    printf("\nNúmero de comparações: %lld\n", m->comparacoes);
    printf("Número de movimentações: %lld", m->movimentacoes);
}

void testar(int V[], int n, const char *nome) 
{
    Metrics m = {0, 0};

    printf("\n============================================");
    printf("\nCaso: %s\n", nome);
    printf("Vetor inicial: ");
    print_array(V, n);

    insertionSort(V, n, &m);

    printf("\nVetor final: ");
    print_array(V, n);
    printf("\n\n============================================\n");
}

int main() 
{
    int A[] = {5, 2, 4, 6, 1, 3};
    int B[] = {1, 2, 3, 4, 5, 6};
    int C[] = {6, 5, 4, 3, 2, 1};

    int n = 6;

    testar(A, n, "Caso A (aleatorio)");
    testar(B, n, "Caso B (ordenado)");
    testar(C, n, "Caso C (invertido)");

    return 0;
}