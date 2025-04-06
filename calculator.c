#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, choice = 0;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    while (choice != 7)
    {
        printf("\nSelect an operation to perform calculations in C calculator:\n");
        printf("1. ADDITION\n");
        printf("2. SUBTRACTION\n");
        printf("3. MULTIPLICATION\n");
        printf("4. DIVISION\n");
        printf("5. SQUARE\n");
        printf("6. SQUARE ROOT\n");
        printf("7. EXIT\n");

        printf("PLEASE, MAKE A CHOICE (1 - 7): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("You chose: ADDITION\n");
            printf("num1 + num2 = %d\n", num1 + num2);
            break;
        case 2:
            printf("You chose: SUBTRACTION\n");
            printf("num1 - num2 = %d\n", num1 - num2);
            break;
        case 3:
            printf("You chose: MULTIPLICATION\n");
            printf("num1 * num2 = %d\n", num1 * num2);
            break;
        case 4:
            printf("You chose: DIVISION\n");
            if (num2 != 0)
                printf("num1 / num2 = %.2f\n", (float)num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case 5:
            printf("You chose: SQUARE\n");
            printf("square(num1) = %.0f\n", pow(num1, 2));
            printf("square(num2) = %.0f\n", pow(num2, 2));
            break;
        case 6:
            printf("You chose: SQUARE ROOT\n");
            if (num1 >= 0 && num2 >= 0) {
                printf("sqrt(num1) = %.2f\n", sqrt(num1));
                printf("sqrt(num2) = %.2f\n", sqrt(num2));
            } else {
                printf("Error: Square root of a negative number is not defined in real numbers.\n");
            }
            break;
        case 7:
            printf("You chose: EXIT\n");
            break;
        default:
            printf("Invalid choice. Please choose a number between 1 and 7.\n");
        }
    }

    return 0;
}
