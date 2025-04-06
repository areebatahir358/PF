//a base converter from base 7 to base 10
#include <stdio.h>
int main()
{
    int baseSeven;
    int count = 1;
    int multiplier = 1;
    int baseTen = 0;
    int i = 1;
    do
    {
        printf("Enter a base 7 digit(0-6):");
        scanf("%d", &baseSeven);
        if(baseSeven != -1)
        {
            baseSeven = baseSeven * multiplier;
            multiplier = multiplier * 7;
            baseTen = baseTen + baseSeven;
        }

    } while (baseSeven != -1);


    printf("The base 10 is:%d", baseTen);
}
