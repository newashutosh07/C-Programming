#include <stdio.h>
#include <math.h>
void checkArmstrong(int num);

int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);
    checkArmstrong(n);
    return 0;
}

void checkArmstrong(int num)
{
    int orgVal = num;
    int r, s = 0;
    while (num != 0)
    {
        r = num % 10;
        s = s + pow(r, 3);
        num = num / 10;
    }
    if (s == orgVal)
    {
        printf("It is Armstrong");
    }
    else
    {
        printf("It is not Armstrong");
    }
}
