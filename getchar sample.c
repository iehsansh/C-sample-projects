#include <stdio.h>
#include <stdlib.h>
#define LENGHT 20

int main()
{
    char str[LENGHT];

    printf("Enter a line of text:\n");

    char c;
    int i = 0;

    while((c=getchar())!='\n')
    {
        str[i]=c;
        i++;
        if(i >= LENGHT-1) break;
    }

    str[i]='\0';
    printf("\nEntered line of text:\n");
    puts(str);  // this line is == printf("%s", str);
    printf("\n");

    return 0;
}
