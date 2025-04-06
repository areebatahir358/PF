//diagonal number triangle, numbers are shown in left diagonal and right diagonanl
#include <stdio.h>
void diagonalNumberTriangle(int size);
int getsize(int size)
{
    printf("enter size:");
    scanf("%d", &size);

    diagonalNumberTriangle(size);
}
int main()
{
    int size;
    getsize(size);
}
void diagonalNumberTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        printf("*");
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for(int k = 0 ; k <= i - i ; k++)
        {
          printf("%d" , i);
        }
        printf("\n");
    }
    for (int i = size + 1 ; i <= size*2 ; i++)
    {
        printf("*");
        for (int j = 1; j <= (size*2) - i ; j++)
        {
            printf(" ");
        }
        for(int k = 0 ; k <= i - i ; k++)
        {
          printf("%d" , i);
        }
        printf("\n");
    }
}
