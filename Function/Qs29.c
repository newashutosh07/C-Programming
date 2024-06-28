// Use library functions to calculate the square of a number given by user.

#include <stdio.h>
#include <math.h>
int main()
{
    int num, sq;
    printf("Enter any Number: ");
    scanf("%d", &num);
    sq = pow(num, 2);
    printf("Square is %d", sq);
    return 0;
}