#include <stdio.h>
#include <math.h>
int main(){
  int num;
    int sum = 0;
    int temp = 0; 
    int firsttemp = 0;

    printf("enter any number:");
    scanf("%d", &num);

    while (num != 0)

    {
        temp = num % 10;
        sum = sum + temp;
        num = num / 10;
        if (firsttemp == 1)
        {
            printf("+%d", temp);
        }
        else
        {
            printf("%d", temp);
            firsttemp = 1;
        }
    }

    printf("(%d)\n" , sum);
}