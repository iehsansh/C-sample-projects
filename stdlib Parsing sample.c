#include <stdlib.h>

int main()   //Parsing is changing character or string to digit
{
    char s[]= "1.2  -3.5   10.8";
    char *pEnd;

    double x = strtof(s, &pEnd);
    double y = strtof(pEnd, &pEnd);
    double z = strtof(pEnd, NULL);

    printf("x = %.1f\n", x);
    printf("y = %.1f\n", y);
    printf("z = %.1f\n", z);


    return 0;
}
