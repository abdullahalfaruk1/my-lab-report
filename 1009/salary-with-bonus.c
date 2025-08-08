#include <stdio.h>

int main()
{

    char name[100];

    double a, b, bonus, salary;

    scanf("%s %lf %lf", name, &a, &b);

    bonus = b * 0.15;

    salary = a + bonus;

    printf("TOTAL = R$ %.2lf\n", salary);

    return 0;
}
