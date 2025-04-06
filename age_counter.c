#include <stdio.h>
int main()
{
    getage();
}
int getage()
{
    int age;

    printf("Enter age:");
    scanf("%d", &age);
    while (age < 0)
    {
        printf("Enter your age again:");
        scanf("%d", &age);
    }
    printing_age(age);
}
int printing_age(int age)
{
    int month = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    month = age * 12;
    hours = month * 30 * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    printf("Your age in months:%d\n", month);
    printf("Your age in hours:%d\n", hours);
    printf("Your age in minutes:%d\n", minutes);
    printf("Your age in seconds:%d\n", seconds);
}