#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float real;
    float imag;
}Complex;

void DisComplex(Complex z);
Complex Conj(Complex z);
float Abs(Complex z);
Complex Add(Complex z1, Complex z2);
Complex Subtract(Complex z1, Complex z2);
Complex Product(Complex z1, Complex z2);
Complex Division(Complex z1, Complex z2);


int main()
{
    Complex z1={1,5};
    printf("z1 = ");
    DisComplex(z1);
    printf("\n\n");

    Complex z2={1,-5};
    printf("z2 = ");
    DisComplex(z2);
    printf("\n\n");

    Complex z3={0,0};
    printf("z3 = ");
    DisComplex(z3);
    printf("\n\n");;

    Complex z4={-1,0};
    printf("z4 = ");
    DisComplex(z4);
    printf("\n\n");

    Complex z5={0,7};
    printf("z5 = ");
    DisComplex(z5);
    printf("\n\n");

    printf("Conj (z1) = ");
    DisComplex(Conj(z1));
    printf("\n\n");

    printf("Abs|z1| = %f\n\n", Abs(z1));
    printf("\n\n");

    printf("z1 + z2 = ");
    DisComplex(Add(z1,z2));
    printf("\n\n");

    printf("z1 - z2 = ");
    DisComplex(Subtract(z1,z2));
    printf("\n\n");

    printf("z1 * z2 = ");
    DisComplex(Product(z1,z2));
    printf("\n\n");

    printf("z1 / z2 = ");
    DisComplex(Division(z1,z2));
    printf("\n\n");

    printf("z1 / z1 = ");
    DisComplex(Division(z1,z1));
    printf("\n\n");

    return 0;
}

void DisComplex(Complex z)
{
    float x=z.real;
    float y=z.imag;

    if(x==0)
    {
        if(y==0)
            printf("0");
        else
            printf("%fi", y);
    }
    else
    {
       if(y==0)
            printf("%f", x);
       else
       {
            if(y>0)
                printf("%f+%fi", x, y);
            else
                printf("%f-%fi", x, -y);
       }
    }
}

float Abs(Complex z)
{
    return sqrt(z.real*z.real+z.imag*z.imag);
}

Complex Conj(Complex z)
{
   Complex zc={z.real, -z.imag};
   return zc;
}

Complex Add(Complex z1, Complex z2)
{
    Complex z={z1.real + z2.real, z1.imag + z2.imag};
    return z;

}

Complex Subtract(Complex z1, Complex z2)
{
    Complex z={z1.real - z2.real, z1.imag - z2.imag};
    return z;

}

Complex Product(Complex z1, Complex z2)
{
    Complex z;
    z.real=z1.real*z2.real-z1.imag*z2.imag;
    z.imag=z1.real*z2.imag+z1.imag*z2.real;
    return z;
}

Complex Division(Complex z1, Complex z2)
{
    Complex z;
    float den=z2.real*z2.real + z2.imag*z2.imag;
    z.real=(z1.real*z2.real+z1.imag*z2.imag)/den;
    z.imag=(z1.imag*z2.real-z1.real*z2.imag)/den;
    return z;

}
