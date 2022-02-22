#include <stdio.h>

void main(){
    int a, b, c;
    printf("Please enter two numbers: \n");
    scanf("%d%d", &a, &b);
    if(a>b){
        c = a;
        a = b;
        b = c;
    }
    if(a%2!=0){
        a--;
        while(b>a+2){
            a += 2;
            printf("%d", a);
        }
    }
}
