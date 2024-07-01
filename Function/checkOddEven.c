#include <stdio.h>
int checkOddEven(int n);
int main()
{
    int n, ans;
    printf("Enter any Number: ");
    scanf("%d", &n);
    ans = checkOddEven(n);
    if (ans == 1)
    {
        printf("It is Even\n");
    }
    else
    {
        printf("It is Odd\n");
    }
    return 0;
}

int checkOddEven(int num)
{
    return (num % 2 == 0) ? 1 : 0;
}