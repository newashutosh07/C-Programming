#include <stdio.h>
void printTable(int n);

int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);
    printTable(n); // argument/actual parameter
    return 0;
}

void printTable(int n)
{ // parameter/formal parameter
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, i * n);
    }
}
