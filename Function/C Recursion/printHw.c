#include <stdio.h>
void printHW(int count);

int main()
{
    printHW(5);
    return 0;
}

void printHW(int count)
{
    if (count == 0)
    {
        return; // Does not return anything.
    }
    else
    {
        printf("Hello World!\n");
        printHW(count - 1);
    }
}
