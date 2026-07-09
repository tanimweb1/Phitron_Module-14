#include <stdio.h>
#include <math.h>

int main()
{
    int N;

    scanf("%d", &N);

    int A[N], B[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);
    }

    double sumA = 0;
    double sumB = 0;
    double dot = 0;

    for(int i = 0; i < N; i++)
    {
        sumA += A[i] * A[i];
        sumB += B[i] * B[i];
        dot += A[i] * B[i];
    }

    double distance = sqrt(sumA + sumB - 2 * dot);

    printf("%.2lf\n", distance);

    return 0;
}