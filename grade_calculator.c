#include<stdio.h>
int main()
{
   int marks;
   printf("Enter your marks:\n");
   scanf("%d", &marks);
   if(marks < 0 || marks > 100)
   {
    printf("ERROR! INVALID MARKS:");
   }
   else
   {
      if(marks > 90)
      {
          printf("Grade A :)");
      }
      else if(marks > 80)
      {
        printf("Grade B");
      }
      else if(marks > 70)
      {
        printf("Grade C");
      }
      else if(marks > 60)
      {
        printf("Grade D");
      }
      else
      {
        printf("Grade F :(");
      }
   }
}