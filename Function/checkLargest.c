#include <stdio.h>
int check(int a, int b, int c);
int main()
{
    int a, b, c, ans;
    printf("Enter any three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    ans = check(a, b, c);
    printf("Largest Number is %d\n", ans);
    return 0;
}

int check(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}