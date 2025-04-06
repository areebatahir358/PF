#include <stdio.h>

int main()
{
    int N;
    int i;
    unsigned long long nfactorial = 1; 
    printf("Enter an integer:\n");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        nfactorial *= i;
    }

    printf("%d! = %llu\n", N, nfactorial);
}
