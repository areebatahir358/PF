#include<stdio.h>
int main()
{
    int i;

    for(int i =1; i<=100; i++)
    {
        if(i % 3 == 0 & i % 5 == 0)
        {
            printf("fizzbuzz\n");
        }
        else if(i % 3 == 0)
        {
            printf("fizz\n");
        }
        else if(i % 5 == 0)
        {
            printf("buzz\n");
        }
        else
        {
           printf("%d\t" , i);
        }

    }
}