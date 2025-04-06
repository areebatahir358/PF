#include<stdio.h>
int main()
{
int num ;
int num1;

printf("enter a number in num:\n");
scanf("%d" , &num);

printf("enter a number in num1:\n");
scanf("%d" , &num1);

char operator;
getchar();
printf("enter an operator:\n");
scanf("%c" , &operator);

if (operator == '+')
{
    printf("num + num1 = %d\n" , num + num1);
}
else if(operator == '-')
{
    printf("num - num1 = %d\n" , num - num1);
}
else if(operator == '/')
{
printf("num / num1 = %d\n" , num / num1);
}
else if(operator == '*')
{
    printf("num * num1 = %d\n" , num * num1);
}

}