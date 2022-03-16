#include <stdio.h>
#include <stdlib.h>

// another sample abour Scan set and Inverted Scan set

int main()
{
    int y, m, d;

    printf("Please enter the date as YYYY-MM-DD: ");
    scanf("%d%*c%d%*c%d", &y, &m, &d);
    printf("\n");

    printf("Results:\n");
    printf(" Year: %d\n", y);
    printf("Month: %d\n", m);
    printf("  Day: %d\n", d);
    printf("\n");

    return 0;
}
