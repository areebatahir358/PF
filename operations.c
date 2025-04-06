 #include <stdio.h>
#include <math.h>
#include <stdbool.h>
void displayMenu()
{
    printf("Select an operation to perform calculations in C calculator:\t");
    printf("1 ADDITION\t");
    printf("2 SUBTRACTION\t");
    printf("3 MULTIPLICATION\t\n");
    printf("4 DIVISION\t");
    printf("5 SQUARE\t");
    printf("6 SQUARE ROOT\t\n");
    printf("7 ceil\t\n");
    printf("8 floor\t\n");
    printf("9 EXIT\t\n");
}
bool isRange(int choice)
{
    if (choice > 0 && choice <= 9)
    {
        return true;
    }
    else
    {
        return false;
        printf("INVALID INPUT\n");
    }
}
double addition(double num1, double num2)
{
    return (num1 + num2);
}
double subtraction(double num1, double num2)
{
    return (num1 - num2);
}
double multiplication(double num1, double num2)
{
    return (num1 * num2);
}

double division(double num1, double num2)

{
    return (num1 / num2);
}
double square(double num1, double num2)
{
    return pow(num1, num2);
}
double squareRoot(double num1)
{
    return sqrt(num1);
}
double ceilNum(double num1)
{
    return ceil(num1);
}
double floorNum(double num1)
{
    return floor(num1);
}

int main()
{
    int choice;

    double num1, num2;
    do
    {
        displayMenu();
        printf("PLEASE , MAKE A CHOICE(1 - 9 (9 for EXIT)):");
        scanf("%d", &choice);

        isRange(choice);

        if (isRange(choice == false))
        {
            break;
        }

        else if (choice == 1)
        {
            printf("You choose: ADDITION\n");

            printf("enter num1:");
            scanf("%lf", &num1);

            printf("enter num2:");
            scanf("%lf", &num2);

            double add = addition(num1, num2);

            printf("sum = %.3lf\n", add);
        }
        else if (choice == 2)
        {
            printf("You choose: SUBTRACTION\n");

            printf("enter num1:");
            scanf("%lf", &num1);

            printf("enter num2:");
            scanf("%lf", &num2);

            double minus = subtraction(num1, num2);
            printf("subtraction =%.3lf\n", minus);
        }
        else if (choice == 3)
        {
            printf("You choose: MULTIPLICATION\n");

            printf("enter num1:");
            scanf("%lf", &num1);

            printf("enter num2:");
            scanf("%lf", &num2);

            double multiply = multiplication(num1, num2);

            printf("multiply =%3.lf\n", multiply);
        }

        else if (choice == 4)
        {
            printf("You choose: DIVISION\n");

            printf("enter num1:");
            scanf("%lf", &num1);

            printf("enter num2:");
            scanf("%lf", &num2);

            if (num2 == 0)
            {
                printf("ZERO ERROR!\n");
            }
            else
            {
                double divide = division(num1, num2);

                printf("division = %3.lf\n", divide);
            }
        }
        else if (choice == 5)
        {
            printf("You choose: SQUARE\n");

            printf("enter number:");
            // getchar();
            scanf("%lf", &num1);
            printf("enter number:");
            // getchar();
            scanf("%lf", &num2);
            double power = square(num1, num2);
            printf("square: %3.lf\n", power);
        }
        else if (choice == 6)
        {
            printf("You choose: SQUARE ROOT\n");

            printf("enter num1:");
            getchar();
            scanf("%lf", &num1);

            if (num1 <= 0)
            {
                printf("IT IS A COMPLEX NUMBER\n");
            }
            else
            {
                double square_root = squareRoot(num1);

                printf("square root = %3.lf\n", square_root);
            }
        }
        else if (choice == 7)
        {
            printf("you choose: ceil\n");

            printf("enter num1:");
            scanf("%lf", &num1);

            double ceiling = ceilNum(num1);

            printf("ceiling = %3.lf\n", ceiling);
        }
        else if (choice == 8)
        {
            printf("you choose: floor\n");

            printf("enter num1:");
            scanf("%lf", &num1);

            double floor = floorNum(num1);
            printf("floor = %3.lf\n", floor);
        }
        else
        {
            printf("You choose: EXIT");
        }
    } while (choice != 0 && choice <= 8);
}