//conversion from base 10 to base 9
#include <stdio.h>
int conversioFromBaseTenToNine(int baseTen);

int getbaseTen(int baseTen)
{
    printf("Enter a base 10 number:");
    scanf("%d", &baseTen);
    conversioFromBaseTenToNine(baseTen);
}
int main()
{
    int baseTen;
    getbaseTen(baseTen);
}
int conversioFromBaseTenToNine(int baseTen)
{
    int r = 0;
    int digit = 0;
    int num = 0;
    int baseNine = 0;
    while (baseTen != 0)
    {
        r = baseTen % 9;
        num = (num * 10) + r;
        baseTen = baseTen / 9;
    }

    while (num != 0)
    {
        baseNine = (baseNine * 10) + (num % 10);
        num = num / 10;
    }

    printf("The base nine is:%d", baseNine);
}