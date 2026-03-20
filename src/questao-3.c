/************************************************************************************************************
*
*    3) Bubble Sort com early stop (flag) (0.5 valor)
*       Crie void bubbleSortOptimizado(int v[], int n) usando uma flag houveTroca para parar quando não
*       houver trocas numa passada. Explique (em comentário no código) por que isso melhora o melhor caso para O(n).
*
*************************************************************************************************************/

#include <stdio.h>

void swap(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
}

void bubbleSortOptimizado(int v[], int n)
{
    int i,j;
    int comparacoes = 0;
    int trocas = 0;
    int houveTroca = 1;

    printf("\n\n** Execução do Bubble Sort Otimizado **");

    // O loop externo agora só roda se tiver uma troca.
    for(i = 0; i < n-1; i++)
    {
        houveTroca = 0; // Reseta para 0 a cada iteração

        for(j = 0; j < n-i-1; j++)
        {
            comparacoes++;
            if(v[j] > v[j+1])
            {
                swap(&v[j], &v[j+1]);
                trocas++;
                houveTroca = 1; // Se houver troca, recebe um para rodar o loop externo novamente
            }
        }

        if(!houveTroca) break;
    } // No melhor caso (vetor já ordenado), não há nenhuma troca e 
      // o loop externo para imediatamente com apenas uma iteração.
      // Sendo assim, no melhor caso o algoritmo tem uma complexidade O(n).

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
    int v[] = {3, 5, 1, 9, 0, 4, 2, 10, 5};

    printf("Valores antes da ordenação:\n");
    print(v, 9);

    bubbleSortOptimizado(v, 9);

    printf("\n\nValores após a ordenação:\n");
    print(v, 9);
}