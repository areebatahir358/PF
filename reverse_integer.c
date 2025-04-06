#include<stdio.h>
int main()
{
int number;
int reverse = 0;
printf("Enter any number:");
scanf("%d" , &number);
while(number != 0)
{
reverse = (reverse * 10) + (number % 10);
number = number / 10;
}
  printf("The reverse of given number is:%d\n" , reverse);
}