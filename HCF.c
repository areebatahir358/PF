#include <stdio.h>
int findingHcf(int num1, int num2);
int getnum1()
{
    int num1;
    printf("enter first integer:");
    scanf("%d", &num1);
    while (num1 <= 0)
    {
        printf("INVALID INPUT!\n");
        printf("enter first integer again:");
        scanf("%d", &num1);
    }

    return num1;
}
int getnum2()
{
    int num2;
    printf("enter second integer:");
    scanf("%d", &num2);
    while (num2 <= 0)
    {

        printf("INVALID INPUT!\n");
        printf("enter second integer again:");
        scanf("%d", &num2);
    }

    return num2;
}
int main()
{

printf("  HCF of two numbers\n---------------------------\n");
    int number1 = getnum1();
    int number2 = getnum2();
    findingHcf(number1, number2);
}

int findingHcf(int num1, int num2)
{
    int min;
    int HCF = 0;

    if (num1 < num2)
    {
        min = num1;
    }
    else
    {
        min = num2;
    }
    for (int i = 1; i <= min; i++)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }
    printf("The hcf of %d and %d is : %d\n", num1 , num2, HCF);
}