#include<stdio.h>
void printWelcome();
int takeinput();
void findelement(int integer);

int main()
{
    int check;
    printWelcome();
    do
    {
    int integer=takeinput();
    findelement(integer);
    printf("do you want to continue calculating frequency of integer?\n\nPress 1 otherwise 0:");
    scanf("%d",&check);
    printf("\n");

    }while(check!=0);
    printf("Bye bye!");
return 0;
}
void printWelcome()
{
    printf("Welcome!\n");
}

int takeinput()
{
    int integer;
    printf("Enter an integer: ");
    scanf("%d",&integer);
    while(integer<0)
    {
        printf("INVALID INPUT\nAGAIN ENTER INTEGER: ");
        scanf("%d",&integer);
    }
    return integer;
}
void findelement(int integer)
{
    int lastdigit;
    int array[10];
    int originalnumber=integer;
    for(int i=0;i<10;i++)
    {
        array[i]=0;

    }
    while(originalnumber!=0)
    {
        lastdigit=originalnumber%10;
        array[lastdigit]=array[lastdigit]+1;
        originalnumber=originalnumber/10;
    }
    for(int i=0;i<10;i++)
    {
        if(array[i]>0)
        {
            printf("%d: %d times\n",i,array[i]);
        }

    }
}
