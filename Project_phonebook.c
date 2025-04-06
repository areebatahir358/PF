#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15
// Function decleration.
void displayMenu();
void addContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int *count);
void displayContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int count);
int searchContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int count, char newarray[]);
void saveContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int count);
void loadContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int *count);

int main()
{
    char names[MAX_CONTACTS][MAX_NAME_LENGTH];
    char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH];
    int count = 0;
    int choice;
    int inputStatus;
    char newarray[MAX_NAME_LENGTH];
    do
    {
        displayMenu();
        do
        {
            printf("Enter your choice: ");
            scanf("%d", &choice);
            inputStatus = choice;
            if (inputStatus == 0)
            {
                printf("INPUT MUST BE AN INTEGER\n");
                while (getchar() != '\n')
                    ;
            }
            else if (choice < 1 || choice > 9)
            {
                printf("INVALID INPUT\n");
            }
        } while (choice < 1 || choice > 9);

        switch (choice)
        {
        case 1:
            addContacts(names, contactNumbers, &count);
            break;

        case 2:
            if (count > 0)
            {
                printf("Enter name or contact you want to search");
                scanf("%s", newarray);
                int index = searchContacts(names, contactNumbers, count, newarray);
                if (index != -1)
                {
                    printf("CONTACT FOUND\n");
                    printf("Name:%s\nContact:%s", names[index], contactNumbers[index]);
                }
                else
                {
                    printf("CONTACT NOT FOUND\n");
                }
            }
            else
            {
                printf("NO CONTACT TO SEARCH\n");
            }

            break;

        case 3:
            if (count > 0)
            {
                printf("Enter the name or phone number you want to delete\n");
                scanf("%s", newarray);
                int index = searchContacts(names, contactNumbers, count, newarray);
                if (index != -1)
                {
                    for (int i = index; i < count - 1; i++)
                    {
                        strcpy(names[i], names[i + 1]);
                        strcpy(contactNumbers[i], contactNumbers[i + 1]);
                    }
                    count--;
                    printf("CONTACT DELETED SUCCESSFULLY\n");
                }
                else
                {
                    printf("CONTACT NOT FOUND\n");
                }
            }
            else
            {
                printf("NO CONTACTS AVAILABLE TO DELETE\n");
            }

            break;

        case 4:
            if (count > 0)
            {
                displayContacts(names, contactNumbers, count);
            }
            else
            {
                printf("No contacts available\n");
            }
            break;

        case 5:
            saveContacts(names, contactNumbers, count);
            break;

        case 6:
            loadContacts(names, contactNumbers, &count);
            break;

        case 7:
            printf("EXITING APPLICATION\n");
            printf("---------THANKS FOR USING---------\n");
            break;

        default:
            printf("INVALID INPUT\nPLEASE ENTER A VALID NUMBER\n");
        }

    } while (choice != 7);

    return 0;
}

// Function definitions.
void displayMenu()
{
    printf("\n----------PHONEBOOK APPLICATION----------\n");
    printf("1.\tAdd Contact\n2.\tSearch Contacts\n3.\tDelete Contact\n4.\tDisplay all Contacts\n5.\tSave Contacts to File\n6.\tLoad Contacts From File\n7.\tExit\n");
}
void addContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int *count)
{
    if (*count == MAX_CONTACTS)
    {
        printf("USER'S PHONEBOOK IS FULL\n*UNABLE TO ADD CONTACTS*\n");
    }
    else
    {
        printf("\nEnter Name: ");
        scanf("%s", names[*count]);

        printf("Enter ContactNumber: ");
        scanf("%s", contactNumbers[*count]);
        printf("CONTACT ADDED SUCCESSFULLY\n");
        (*count)++;
    }
}

void displayContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int count)
{
    printf("\nCONTACT LIST\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. NAME :%s\nCONTACT NUMBER:%s\n", i + 1, names[i], contactNumbers[i]);
    }
    printf("\n");
}

int searchContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int count, char newarray[])
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(names[i], newarray) == 0 || strcmp(contactNumbers[i], newarray) == 0)
        {
            return i;
        }
    }
    return -1;
}

void saveContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int count)
{
    FILE *file = fopen("phonebook.txt", "w");
    if (file != NULL)
    {
        for (int i = 0; i < count; i++)
        {
            fprintf(file, "%s %s\n", names[i], contactNumbers[i]);
        }
        fclose(file);
        printf("CONTACTS SAVED\n");
    }
    else
    {
        printf("UNKNOWN ERROR\n");
    }
}

void loadContacts(char names[MAX_CONTACTS][MAX_NAME_LENGTH], char contactNumbers[MAX_CONTACTS][MAX_NAME_LENGTH], int *count)
{
    FILE *file = fopen("phonebook.txt", "r");
    if (file != NULL)
    {
        while (fscanf(file, "%s %s", names[*count], contactNumbers[*count]) == 2)
        {
            (*count)++;
        }
        fclose(file);
        printf("SUCCESSFULLY LOADED CONTACTS\n");
    }
    else
    {
        printf("UNKNOWN ERROR\n");
    }
}