#include <stdio.h>
#include <math.h>
#include <complex.h>

/**
 * main - function to solve prabola equation
 * Return :0
 */
int main (void)
{
	float a ,b ,c,spec,solve;

	printf("write the equation as a x² + b x + c = 0 \n");
	scanf(" %f %f %f",&a ,&b,&c);
	printf("your equation is %.1fx² + %.1fx + %.1f  \n",a ,b,c);
	spec=(pow(b,2))-(4*a*c);
	if (a == 0)
	{
		printf("this equation isn't prabola \n");
	}
	else if(spec==0)
	{
		solve=-b/2*a;
		printf("this equatino has one solution = %.1f \n",solve);
	}
	else if(spec >0)
	{
		float solution1 ,solution2;

		solution1 = (-b+sqrt(spec))/(2*a);
		solution2 = (-b-sqrt(spec))/(2*a);
		printf("this equatino has two solutions \n");
		printf("first solution = %f \n",solution1);
		printf("second solution = %f \n",solution2);
	}
	else if(spec <0)
	{
		float  solution1 ,solution2,img,real;

		real=-b/2*a;
		img=sqrt(-spec)/2*a;
		printf("this equatino has two imagin solutions \n");
		printf("first solution = %.2f + %.2f i \n",real ,img);
		printf("second solution = %.2f - %.2f i\n",real ,img);
	}
	
	return 0;
}
