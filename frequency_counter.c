//digit frequency counter
#include <stdio.h>
void countDigitFrequency(int num);
int getnum(int num)
{
    int N;
    printf("WELCOME!\n");
    printf("Enter an integer:");
    scanf("%d", &num);
    while (N != 0)
    {
        if(N == 0)
        {
            printf("BYE BYE!");
        }
        else
        {
        printf("WELCOME!\n");
        printf("Enter an integer:");
        scanf("%d", &num);
        countDigitFrequency(num);
        }
    }
}

int main()
{
    int num;

    getnum(num);
    int N;
    printf("If you want to continue press 1 other wise 0.");
    scanf("%d", &N);
}
void countDigitFrequency(int num)
{
    for (int i = 1; i <= 9; i++)
    {
        int count = 0;
        int orignalNum = num;
        while (orignalNum != 0)
        {
            int digit = orignalNum % 10;
            if (digit == i)
            {
                count++;
            }
            orignalNum = orignalNum / 10;
        }
        if (count != 0)
        {

            printf("Digit%d: %dtimes\n ", i, count);
        }
    }
   
}
