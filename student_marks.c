#include <stdio.h>

int main()
{
    int m1, m2, m3;
    float average;

    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    average = (m1 + m2 + m3) / 3.0;

    printf("Average = %.2f\n", average);

    if (average >= 50)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}
