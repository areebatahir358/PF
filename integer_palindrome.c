#include<stdio.h>
int main()
{
int number;
int reverse;
reverse = 0;
printf("Enter any number:");
scanf("%d" , &number);
int num=number;
while(number != 0)
{
    reverse = (reverse * 10) + (number % 10);
     number = number / 10;
}
printf("reverse of number is:%d\n" , reverse);
if(num == reverse)
{
    printf("ITS A PALINDROME!:)");
}
else{
    printf("NOT a palindrome");
}
}