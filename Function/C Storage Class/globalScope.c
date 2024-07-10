#include <stdio.h>
int result;

void addNumbers(int number1, int number2)
{
    result = number1 + number2;
    printf("Result = %d", result);
}

int main()
{

    addNumbers(5, 6);

    return 0;
}