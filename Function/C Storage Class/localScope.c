#include <stdio.h>

int addNumbers(int number1, int number2)
{
    int result = number1 + number2;
    return result;
}

int main()
{

    int sum = addNumbers(5, 6);
    printf("Result = %d", sum);
    return 0;
}