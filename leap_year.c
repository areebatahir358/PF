#include<stdio.h>
int main()
{
int year;
printf("enter any year:");
scanf("%d" , &year);
printf("The entered year is:%d\n" , year);
if(year < 0)
{
    printf("ERROR! PLEASE ENTER A VALID YEAR.\n");
    printf("TRY AGAIN");
}
else
{
    if(year % 4 == 0)
    {
        printf("THE YEAR IS LEAP YEAR\n");
    }
    else
    {
       printf("The year is NOT leap year\n");
    }
}
}