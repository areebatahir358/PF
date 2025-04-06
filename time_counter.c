#include <stdio.h>
char twelvehourtime(char time[6]);


int main()
{
    int hour;
    int minute;
    gettime(hour, minute);
}

int gettime(int hour, int minute)
{

    printf("Enter 24 hour time:");
    scanf("%d", &hour);

    if (hour <= 12 || hour > 24)
    {
        while (hour <= 12 || hour > 24)
        {
            printf("Please Enter 24 hour time:");
            scanf("%d", &hour);
        }
        printf("Enter minutes:");
        scanf("%d", &minute);
        printf("The 24 hours time is: %d:%d\n", hour, minute);
        twelwehourtime(hour, minute);
    }
    else
    {
        printf("Enter minutes:");
        scanf("%d", &minute);
        printf("The 24 hours time is: %d:%d\n", hour, minute);
        twelwehourtime(hour, minute);
    }
}
int twelwehourtime(int hour, int minute)
{
    if (hour > 12 && hour <= 24)
    {
        hour = hour - 12;
    }
    printf("The twelwe hour time is : %d:%d", hour, minute);
}

