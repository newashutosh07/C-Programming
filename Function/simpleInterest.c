#include <stdio.h>
void simpleInterest();
int main()
{
    simpleInterest();
    return 0;
}

void simpleInterest()
{
    printf("Enter Principle, Time & Rate: ");
    float p, t, r;
    scanf("%f %f %f", &p, &t, &r);
    float ans = p * t * r / 100;
    printf("Simple Interest is: %f", ans);
}
