#include <stdio.h>
#include <stdlib.h>

// sample abour Scan set and Inverted Scan set

int main()
{
    char str[10];

    printf("Enter the string: ");
    scanf("%[aeiou]",str);   //for inverted Scan Set = scanf("%[^aeiou]",str)
    printf("\n");

    printf("Result:\n");
    puts(str);
    printf("\n");

    return 0;
}
