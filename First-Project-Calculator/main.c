#include <stdio.h>
#include <stdbool.h>

float addition(float x, float y)
{
    float sum = x + y;
    return sum;
}

float subtraction(float x, float y)
{
    float diff = x - y;
    return diff;
}

float multiplication(float x, float y)
{
    float product = x * y;
    return product;
}

float division(float x, float y)
{
    float result = x / y;
    return result;
}

bool isOn = true;

int main()
{
    float x, y, result;
    char operator;
    
    while (isOn)
    {
        printf("Please enter the operation you would like to peform:\n");
        printf("+ | - | * | / | q\n");

        scanf(" %c", &operator);
        printf("You have chosen %c\n", operator);
        
        switch (operator)
        {
        case '+':

            printf("Plese enter the first number for the addition: ");
            scanf(" %f", &x);

            printf("You chose %.2f Please enter the second number: ", x);
            scanf(" %f", &y);

            result = addition(x, y);

            printf("The result is %.2f\n", result);

            break;

        case '-':

            printf("Plese enter the first number for the subtraction: ");
            scanf(" %f", &x);

            printf("You chose %.2f Please enter the second number: ", x);
            scanf(" %f", &y);

            result = subtraction(x, y);

            printf("The result is %.2f\n", result);

            break;

        case '*':

            printf("Plese enter the first number for the multiplication: ");
            scanf(" %f", &x);

            printf("You chose %.2f Please enter the second number: ", x);
            scanf(" %f", &y);

            result = multiplication(x, y);

            printf("The result is %.2f\n", result);

            break;

        case '/':

            printf("Plese enter the first number for the division: ");
            scanf(" %f", &x);

            printf("You chose %.2f Please enter the second number: ", x);
            scanf(" %f", &y);

            result = division(x, y);

            printf("The result is %.2f\n", result);

            break;

        case 'q':
            printf("Program will close...\n");
            isOn = false;
            break;

        default:
            printf("Invalid input\n");
            break;
        }
    }

    return 0;
}