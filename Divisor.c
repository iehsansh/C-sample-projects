#include <stdio.h>
#include <math.h>

//int NumberofDivisors(int n);
void PrintArray(const int a[], int N);
int GetDivisors(int n, int D[]);

int main()
{
    int n;
    int i;

    printf("Enter an Integer: \n");
    scanf("%d", &n);
    printf("\n");

    int nd=GetDivisors(n, NULL);
    printf("%d has %d Divisors.\n", n, nd);

    int D[nd];
    for(i=0; i<nd; i++)
    {
        D[i]=0;
    }
    GetDivisors(n,D);

    printf("Divisors of %d =  {", n);
    PrintArray(D, nd);
    printf("}\n");

    return 0;
}

/*
int NumberofDivisors(int n)
{
    if(n==0) return 0;
    if(n<0) n=-n;

    int nd = 0;
    int i;
    for(i=1; i<=n; i++)
    {
        if(n % i == 0) nd++;
    }
    return nd;
}
*/

int GetDivisors(int n, int D[])
{
    if(n==0) return 0;
    if(n<0) n=-n;

    int j = 0;
    int i;
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
           {
              if(D!=NULL) D[j]=i;
              j++;
           }
    }
    return j;
}


void PrintArray(const int a[], int N)
{
    //printf("List of array members:\n");
    int i;
    for(i = 0; i <N; i++)
    {
        printf("%d", a[i]);
        if(i<N-1)
        {
            printf(", ");
        }
    }
    //printf("\n\n");
}
