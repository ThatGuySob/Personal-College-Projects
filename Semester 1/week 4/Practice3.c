
/* Program to demonstrate entering more than 1 data item  
*/  
#include <stdio.h>  
int main(void)  
{  
	float a = 0;  
	
	printf("Enter a single number and a single character\n");    
	
	scanf("%f",&a);  
	
	printf("You entered %.2f", a);  
	
	return 0;  
}