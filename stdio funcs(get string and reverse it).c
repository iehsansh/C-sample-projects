#include <stdio.h>
#include <stdlib.h>

void ReverseString(const char *s);

int main()
{
    char str[50];

    printf("Enter a line of text:\n");
    fgets(str, 50, stdin); //stdin is for standard input

    printf("\nEntered text is:\n%s\n", str);

    printf("Length of entered text: %d\n", strlen(str)-1);  //-1 is for minus Null character

    printf("Reversed text:\n");
    ReverseString(str);
    printf("\n");

    return 0;
}

void ReverseString(const char *s)
{
    if(s[0] == '\0')
    {
        return;
    }
    else
    {
        ReverseString(&s[1]);
        if(s[0] !='\0') putchar(s[0]);
    }
}
