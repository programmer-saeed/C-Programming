#include<stdio.h>
int main ()
{

    int a = 10 , b = 3;
    
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    double div = (double)a / b;
    int mod = a % b;

    printf("Summation      = %d\n",sum);
    printf("Subtraction    = %d\n",sub);
    printf("multiplication = %d\n",mod);
    printf("Division       = %.3lf\n",div);
    printf("Modulus        = %d\n", mod);
    return 0;
}