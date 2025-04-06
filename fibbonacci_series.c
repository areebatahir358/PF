#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number upto you want a fibbonacci sequence:");
    scanf("%d", &N);
   int num1 = 0;
   int num2 = 1;
    int temp = 0;
    for(int i = 1 ; i <= N ; i++)
    
    {   
        printf("%d\n",num1);
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
   

}
