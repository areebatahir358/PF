#include <stdio.h>
int multiplicationTable(int number);
int getnum()
{
    int num;
    printf("enter an integer:");
    scanf("%d", &num);
    multiplicationTable(num);
}
int main()
{
     getnum();
}
int multiplicationTable(int number)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", number, i, number * i);
    }
}