#include <stdio.h>
int findStrongnum(int num);
int getnum(int num)
{
    printf("Enter an integer:");
    scanf("%d", &num);
    while (num <= 0)
    {
        printf("INVALID INPUT\n");
        printf("Enter an integer:");
        scanf("%d", &num);
    }
    findStrongnum(num);
}
int main()
{
    int num;
    getnum(num);
}
int findStrongnum(int num)
{
    int factorial = 1;
    int orignalNumber = 0;
    orignalNumber = num;
    int sum = 0;
    while (num != 0)
    {
        int temp = num % 10;

        factorial = 1;
        for (int i = 1; i <= (temp); i++)
        {

            factorial *= i;
        }
        printf("The factorial of %d is:%d\n",temp , factorial);
        sum = sum + factorial;
        num = num / 10;
    }
    printf("The sum of factorials is:%d\n", sum);
    if (sum == orignalNumber)
    {
        printf("NUMBER IS STRONG NUMBER:)\n");
    }
    else
    {
        printf("NOT A STRONG NUMBER");
    }
}
