#include <stdio.h>

int Fibo1(int n);  //prototype
int Fibo(int n);

int main()
{
    int n;
    int N = 40;

    printf("Using Function: Fibo1\n");
    for(n = 0; n < N; n++)
    {
        printf("F(%d) = %d\n", n, Fibo1(n));
    }
    printf("\n");

    printf("Using Function: Fibo\n");
    for(n = 0; n < N; n++)
    {
        printf("F(%d) = %d\n", n, Fibo(n));
    }
    printf("\n");

    printf("Estimating Golden Ratio:\n");
    for(n = 1; n < N; n++)
    {
        float r = (float)Fibo(n + 1)/Fibo(n);
        printf("R(%d) = F(%d)/F(%d) = %f\n", n, n+1, n, r);
    }
    printf("\n");

    return 0;
}

//function
int Fibo1(int n)    //add n om yek fibonachi
{
   if(n == 0) return 0;
   if(n == 1) return 1;

   int a = 0;
   int b = 1;
   int i;
   int c;
   for(i =2; i <= n; i++)
   {
       c = a + b;
       a = b;
       b = c;
   }
   return c;
}

int Fibo(int n)
{
   if(n == 0) return 0;
   if(n == 1) return 1;
   return Fibo(n - 1) + Fibo(n - 2);
}
