#include<stdio.h>
void printUpsideSideDownTriangle(int height)
{
   for(int i = height ; i >= 1 ; i--)
   {
    for(int j = 1 ; j <= height - i ; j++)
    {
        printf(" ");
    }
    for(int k = 1 ; k <= (2*i - 1) ; k++)
    {
        printf("*");
    }
    printf("\n");
   }
}
int main()
{
     int height;
    do
    {
        printf("enter number of rows:");
        scanf("%d", &height);
        if (height <= 0)
        {
            printf("ERROR! INVALID INPUT\n");
        }
        else
        {

         printUpsideSideDownTriangle(height);
        }
    }while(height <= 0);

}