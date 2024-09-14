#include <stdio.h>
int main()
{
    int N, R, V;
    while (scanf("%d %d", &N, &R) != EOF)
    {
        int vetor[N + 1];
        for (int i = 0; i <= N; i++)
        {
            vetor[i] = 0;
        }
        for (int i = 1; i <= R; i++)
        {
            scanf("%d", &V);
            vetor[V] = 1;
        }
        if (N == R)
        {
            printf("*\n");
        }
        else
        {
            for (int i = 1; i <= N; i++)
            {
                if (vetor[i] == 0)
                {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}