#include <stdio.h>
int findingPrimesBetweenRange();
int getnum1();
int getnum2();
int main()
{
    printf("Enter a range:(start and end)\n");
    int number1 = getnum1();
    int number2 = getnum2();

    findingPrimesBetweenRange(number1, number2);
}

int getnum1()
{
    int num1;
    printf("Enter a start number:");
    scanf("%d", &num1);
    while (num1 <= 0)
    {
        printf("INVALID INPUT\n");
        printf("Enter a positive start number again:");
        scanf("%d", &num1);
    }
    return num1;
}
int getnum2()
{
    int num2;
    printf("Enter end number:");
    scanf("%d", &num2);
    while (num2 <= 0)
    {
        printf("INVALID INPUT\n");
        printf("Enter a positive end number again:");
        scanf("%d", &num2);
    }

    return num2;
}
int findingPrimesBetweenRange(int num1, int num2)
{
    printf("prime numbers between %d and %d are:\n" , num1 , num2);
    int count = 0;
    int n;
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
   do{
    if(n == 0)
    {
        printf("EXIT!");
    }
    else if(n == 1)
    {
    for (int i = num1; i <= num2; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }


    if (count == 2)
    {
        printf("%d ", i);
    }


    }
   }
   }while(n != 0);
    
}
