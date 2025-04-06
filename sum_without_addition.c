#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a;
    int b;
    int i = 1;

    printf("Enter integer in a:");
    scanf("%d", &a);
    printf("Enter integer in b:");
    scanf("%d", &b);

    int abs_a = abs(a);
    int abs_b = abs(b);

    if (a < 0 && b < 0) 
    {
        while (i <= abs_b)
    {
        --a;
        i++;
    }
        printf("The sum is:%d\n",a);
    }
    else if (a > 0 && b > 0)
    {
        while (i <= b)
    {
       ++a;
        i++;
    }
        printf("The sum is: %d",a);
    }
    

    else if (a > 0 && b <= 0)
    {
        while (i <= abs_b)
    {
        --a;
        i++;
    }
        printf("The sum is: %d",a);
    }
    else if (a <= 0 && b > 0)
    {
        while (i <= b)
    {
       ++a;
        i++;
    }
        printf("The sum is: %d",a);
    }
    
    return 0;
}