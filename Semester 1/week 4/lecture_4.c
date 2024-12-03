/* Program to demonstrate simple standard input
*/

#include <stdio.h>

int main(void)
{
    
    int var = 0;

    printf("Enter any whole number\n");
    
    // Ensure you include the & character before the variable name
    
    scanf("%d", &var);
    
    printf("var contains %d", var);
    
    return 0;
}

