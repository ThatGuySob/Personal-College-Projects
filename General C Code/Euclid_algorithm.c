/*
This code is used to 

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

int euclidp1(int, int);

int main()

{
    int num1;
    int num2;
    int GCD;

    printf("Please enter 2 numbers to get their GCD:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    GCD = euclidp1(num1, num2);

    printf("The Greatest Common Divisor is %d\n(%d ,%d)", GCD, num1, num2);

    return 0;
}

int euclidp1(int a, int b)
{  
    int temp;
    int q;
    int r = 1;
    int remainder;

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    while (r > 0)
    {
        q = a/b;
        remainder = r;
        r = a - (q*b);
        printf("%d = %d - %d(%d) \n", r, a, q, b);
        a = b;
        b = r;
    }

    return remainder;
}