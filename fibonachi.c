#include <stdio.h>

int Fibo(int n);  //prototype

int main()
{
    int n;
    for(n = 0; n < 10; n++)
    {
        printf("F(%d) = %d\n", n, Fibo(n));
    }
    return 0;
}

//function
int Fibo(int n)    //add n om yek fibonachi
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
