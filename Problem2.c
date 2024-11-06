#include<stdio.h>
int main()
{
	float F,C;
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f",&F);
 	C = (5.0/9.0)*(F-32);
 	printf("Temperature in celsius is %f",C);
 	return 0;
 	
}