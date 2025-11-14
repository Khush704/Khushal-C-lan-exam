#include <stdio.h>

int main()
{
    int num1, num2, result;
    int choice;

    printf("Enter first num : ");
    scanf("%d", &num1);

    printf("Enter second num : ");
    scanf("%d", &num2);

    printf("\n Simple Calculator");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("\n result = %d", result);
        break;

    case 2:
        result = num1 - num2;
        printf("\n result = %d", result);
        break;

    case 3:
        result = num1 * num2;
        printf("\n result = %d", result);
        break;

    case 4:
        result = num1 / num2;
        printf("\n result = %d", result);
        break;

    default:
        printf("Wrong choice! \n");
    }

    return 0;
}
