#include <stdio.h>

int comparacoes = 0;  
int trocas = 0;       

void swap(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
}

void swapFloat(float *a, float *b)
{
    float aux = *a;

    *a = *b;
    *b = aux;
}

void bubbleSort(float v[], int n) 
{
    int i,j;
    comparacoes = 0;
    trocas = 0;

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            comparacoes++;
            if(v[j] > v[j+1])
            {
                swapFloat(&v[j], &v[j+1]);
                trocas++;
            }
        }
    }

    printf("\nQuantidade de comparações: %d", comparacoes);
    printf("\nQuantidade de trocas: %d\n", trocas);
}

void bubbleSortOptimizado(int v[], int n)
{
    int i,j;
    int houveTroca = 1;
    comparacoes = 0;
    trocas = 0;

    for(i = 0; i < n-1; i++)
    {
        houveTroca = 0; 

        for(j = 0; j < n-i-1; j++)
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

void bubbleSortOrdem(int v[], int n, int ordem)
{
    int i,j;
    comparacoes = 0;
    trocas = 0;

    if (n <= 1)
    {
        printf("\nNão precisa ser ordenado!\n");
        return;
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            comparacoes++;
            if (
                (ordem == 1 && v[j] > v[j+1]) ||
                (ordem == -1 && v[j] < v[j+1])
            ) {
                swap(&v[j], &v[j+1]);
                trocas++;
            }
        }
    }

    printf("\nQuantidade de comparações: %d", comparacoes);
    printf("\nQuantidade de trocas: %d", trocas);
}
 
void imprimirVetor(int v[], int n) 
{
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);

    printf("\n");
}
 
int main() 
{
    float notas[] = {7.5, 8.2, 6.9, 9.1, 5.4, 8.8, 7.0};
    int n = 7;
    float soma = 0;
    float media = 0;

    bubbleSort(notas, n);

    printf("Notas ordenadas:\n");

    for (int i = 0; i < n; i++) 
        printf("%.2f ", notas[i]);

    printf("\n\nTop 3 notas:\n");

    for (int i = n - 1; i >= n - 3 && i >= 0; i--) 
        printf("%.2f\n", notas[i]);

    for (int i = 0; i < n; i++) 
        soma += notas[i];

    media = soma / n;

    printf("\nMédia: %.2f\n", media);
    
    return 0;
}