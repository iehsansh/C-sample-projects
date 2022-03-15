#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x = 10.56;
    double y = -4.8746;

    printf("Using printf function:\n");
    printf("(x = %.2f, y = %.2f)", x, y);
    printf("\n\n");

    char str[100];
    sprintf(str, "(x = %.2f, y = %.2f)", x, y);
    printf("Using printf function:\n");
    puts(str);
    printf("\n\n");


    return 0;
}
