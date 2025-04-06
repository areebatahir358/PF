#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);
    int array[size];  //declaration of array.
    printf("Enter array elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int n1 = 0;
    int n2 = size - 1;
    int temp;

    for (int i = 0; i < size / 2; i++)
    {
        temp = array[n1];
        array[n1] = array[n2];
        array[n2] = temp;
        n1++;
        n2--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d  ", array[i]);
    }
}
