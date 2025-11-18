#include <stdio.h>
#include <math.h>

int main(void)
{

    float firstNumber;
    float secondNumber;
    float result;
    char opperator;
    printf("Enter the first number :");
    scanf("%f",&firstNumber);
    printf("Enter the operator * or + or - or / or %% :");
    scanf(" %c",&opperator);
    printf("Enter the second Number :");
    scanf("%f",&secondNumber);
    // Carries out multiplication
    if(opperator == '*')
    {
        result = firstNumber*secondNumber;
        printf("%f",result);
    }
    // Carries out addition
    else if(opperator == '+')
    {
        result = firstNumber+secondNumber;
        printf("%f",result);
    }
    // Carries out subtraction
    else if(opperator =='-')
    {
        result = firstNumber-secondNumber;
        printf("%f",result);
    }
    // Carries out division
    else if(opperator == '/')
    {
        // Outputs "cant divide by zero" in case one attempts to divide a number by zero
        if(secondNumber == 0 && firstNumber != 0)
        {
            printf("cant divide by zero!");
        }
        // outputs "invalid format used" in case one attempts to divide zero by zero
        else if(secondNumber == 0 && firstNumber == 0)
        {
            printf("Invalid format used");
        }
        else
        {
            result = firstNumber/secondNumber;
            printf("%f",result);
        }
    }
    // finds the remainder after division
    else if (opperator == '%')
    {
        if(secondNumber == 0 && firstNumber != 0)
        {
            printf("cant divide by zero!");
        }
        else if(secondNumber == 0 && firstNumber == 0)
        {
            printf("Invalid format");
        }
        else
        {
            int firstNumber1 = (int)round(firstNumber);
            int secondNumber1 = (int)round(secondNumber);
            result = firstNumber1%secondNumber1;
            printf("%f",result);
        }
    }
    else
    {
        printf("Invalid operator!");
    }

}
