#include<stdio.h>
int main ()
{
    int first_input, second_input;

    // printf("Enter First value : ");
    scanf("%d",&first_input);

    // printf("Enter Second value : ");
    scanf("%d",&second_input);

    int    Summation      = first_input + second_input;
    int    Subtraction    = first_input - second_input;
    int    Multiplication = first_input * second_input;
    double Division       = (double)first_input / second_input;
    int    Modulus        = first_input % second_input;

    printf("Summation      = %d\n", Summation);
    printf("Subtraction    = %d\n", Subtraction);
    printf("Multiplication = %d\n", Multiplication);
    printf("Division       = %.3lf\n", Division);
    printf("Modulus        = %d\n", Modulus);

    return 0;

}
