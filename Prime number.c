#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int is_prime(int a);

int main()
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("\n");

    if(is_prime(a))
    {
      printf("\t%d is a PRIME number.\n", a);
    }
    else
    {
        printf("\t%d is not a PRIME number.\n", a);
    }
    return 0;
}

int is_prime(int a)
{
   int prime = TRUE;
    int i;
    for(i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            prime = FALSE;
            break;
        }
    }
    return prime;
}
