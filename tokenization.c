#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 55
void takeSentence(char s[], int size);
char takeDelimeter();
void printSentence(char S[]);
void printDelimeter(char D);
void tokenizeSentence(char S[], char D, int r, int c, char token[5][10]);
void printTokens(int r, int c, char token[][c]);

int main()
{
    char token[5][10] = {"\0"};
    char string[20];
    char D;
    takeSentence(string, 20);
    D = takeDelimeter(D);
    printSentence(string);
    printDelimeter(D);
    tokenizeSentence(string, D, 5, 10, token);
}

void takeSentence(char s[], int size)
{
    printf("Enter any sentence:");
    fgets(s, size, stdin);
}
char takeDelimeter()
{
    char D;
    printf("Enter delimeter:");
    scanf("%c", &D);
    return D;
}
void printSentence(char s[])
{
    printf("Sentence:%s\n", s);
}
void printDelimeter(char D)
{
    printf("Delimeter:%c\n", D);
}
void tokenizeSentence(char s[], char D, int r, int c, char token[5][10])
{

    int i = 0;
    int word = 0; 
    int alphabet = 0;     

    while (s[i] != '\0' && s[i] != '\n')
    {
        if (s[i] != D)
        {
            token[word][alphabet] = s[i];
            alphabet++;
        }
        else
        {
            word++;
            alphabet = 0;
        }
        i++;
    }

    printTokens(r, c, token);
}
void printTokens(int r, int c, char token[5][10])
{

    printf("Tokenized words for the sentence are:\n");

    for (int i = 0; i < r; i++)
    {

        if (token[i][0] != '\0')
        {
            printf("%s\t is at index [%d]\n", token[i], i);
        }
    }
}