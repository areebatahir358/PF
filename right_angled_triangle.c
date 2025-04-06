#include <stdio.h>

void printRightAngleTriangle(int height) // function declaration
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int height;
    do
    {
        printf("enter number of rows:\n");
        scanf("%d", &height);
        if (height <= 0)
        {
            printf("ERROR! INVALID INPUT\n");
        }
        else
        {

            printRightAngleTriangle(height);
        }
    }while(height <= 0);
}