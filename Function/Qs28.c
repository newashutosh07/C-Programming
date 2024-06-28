#include <stdio.h>
void printNamaste();
void printBonjour();
int main()
{
    char ch;
    printf("Enter n if you are Nepali else f if you are French: ");
    scanf("%c", &ch);
    if (ch == 'n')
    {
        printNamaste();
    }
    else
    {
        printBonjour();
    }
}

void printNamaste()
{
    printf("Namaste\n");
}
void printBonjour()
{
    printf("Bonjour");
}