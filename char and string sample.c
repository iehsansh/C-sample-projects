#include <stdio.h>
#include <ctype.h>

int main()
{

    char ch;

    while((ch=getchar()) != EOF)
    {
        if(ch==10) continue; //if we dont need enter number

        printf("ASCII code for %c id %d.\n", ch, ch);

        /*
        if(isdigit(ch))
            printf("%c is a Digit.\n", ch);
        else
           printf("%c is not a Digit.\n", ch);
        */
//or
//        isdigit(ch) ?printf("%c is a Digit.\n", ch): printf("%c is not a Digit.\n", ch);
//or
        printf(isdigit(ch) ? "%c is a Digit.\n" : "%c is not a Digit.\n", ch);
        printf(isalpha(ch) ? "%c is a Letter.\n" : "%c is not a Letter.\n", ch);
        if(isalpha(ch)) printf(islower(ch) ? "%c is lowercase.\n" : "%c is uppercase.\n", ch);
        printf(ispunct(ch) ? "%c is a punctuation.\n" : "%c is not a punctuation.\n", ch);
        printf(isspace(ch) ? "%c is a spacing character.\n" : "%c is not a spacing character.\n", ch);

        printf("\n");
    }
    return 0;
}
