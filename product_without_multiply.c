#include<stdio.h>  
#include<stdlib.h>
int main()

{
    int a;
    int b;
    int sum = 0;
    printf("Enter integer in a:");
    scanf("%d", &a);
    printf("Enter integer in b:");
    scanf("%d", &b);
    int N = abs(b);

    if (b > 0 && a > 0)
    {
        for (int i = 1; i <= N; i++)
        {
            sum = sum + a;
        }
        
        printf("The product is:%d\n", sum);
    }

    else if (b < 0 && a < 0)
    {
        for (int i = 1; i <= N; i++)
        {
            sum =sum + -(a);
        }
        
        printf("The product is:%d\n", sum);
    }
    else if (a > 0 && b < 0)
    {
        for (int i = 1; i <= N; i++)
        {
            sum =sum + a;
        }
        
        printf("The product is:-%d", sum);
    }
    else if (a < 0 && b > 0)
    {
        for (int i = 1; i <= N; i++)
        {
            sum =sum + a;
        }
    
        printf("The product is:%d", sum);
    }
}


