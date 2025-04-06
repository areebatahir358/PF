#include<stdio.h>
int main()
{
    char signal;
    printf("Enter the any one traffic signal light R(red), G(green) ,Y(yellow):\n");
    scanf("%c" , &signal);
    if(signal == 'R'|| signal == 'r')
    {
      printf("STOP!");
    }
    else if(signal == 'G' || signal == 'g')
    {
        printf("YOU CAN GO!");
    }
    else if(signal == 'Y' || signal == 'y')
    {
        printf("GET READY TO GO!");
    }
}