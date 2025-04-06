#include<stdio.h>
int main()
{
char alphabet;
printf("enter any alphabet:");
scanf("%c", &alphabet);
if(alphabet == 'a'|| alphabet == 'e'|| alphabet == 'i'|| alphabet == 'o'|| alphabet == 'u' ||
 alphabet == 'A'||alphabet == 'E'||alphabet == 'I'||alphabet == 'O'||alphabet == 'U')
{
    printf("GREAT! THE ALPHABET IS VOWEL:)");
}
else
{
  printf("THE ALPHABET IS CONSONANT:)");
}
}