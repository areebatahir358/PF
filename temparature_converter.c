#include<stdio.h>
int main()
{
int tempinfahrenheit;
float tempincelcius;
float fixvalue = 1.8;
printf("Enter temparature in fahrenheit:");
scanf("%d" , &tempinfahrenheit);

tempincelcius = (tempinfahrenheit - 32) / fixvalue ;
printf("The temparature in celcius is:%f\n" , tempincelcius);
}