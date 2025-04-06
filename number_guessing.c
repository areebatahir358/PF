#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int rand_num;
  srand(time(NULL));
  rand_num = rand() % 100;
  int usersnum;

  printf("Guess my number game\n");
int count = 0;
   while (usersnum != rand_num)
{
    printf("Guess a number between 1 and 100:");
    scanf("%d", &usersnum);
    count++;
  

    if (usersnum > rand_num)
    {
      printf("TO HIGH!\n");
    }
    else if (usersnum < rand_num)
    {
      printf("TO LOW\n");
    }
    else if (usersnum == rand_num)
    {
      printf("GREAT! you have guessed the number in %d turns." , count);
    }
 
}
}
