#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    printf("enter an integer in num1:\n");
    scanf("%d" , &num1);

    printf("enter an integer in num2:\n");
    scanf("%d" , &num2);

    printf("enter an integer in num3:\n");
    scanf("%d" , &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 %d is largest:)",num1);
        }
        else
        {
            printf("largest is num3 :) %d",num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("num2 is largest:) %d",num2);
        }
        else
        {
            printf("largest is num3:) %d",num3);
        }
    }
}