#include <stdio.h>
#include <math.h>
/**
 * main - a task to ease the orbital mechanics
 * Return: always0
 */
int main (void)
{
	printf("chose the task you want to do \n");
	printf("\t 01:Cross product 02:scalar multiplication \n");
	printf("\t 03:adding vectors 04:Subtraction vectors \n");
	int task ;

	scanf("%d", &task);
	printf("%d",task);
	if(task == 1)
	{
		float first_v , second_v ,thetanrad , thetandeg , result;

		printf("enter the two vectors as scale of A & B and THETA \n");
		printf("\t first vector\t");
		scanf("%f", &first_v);
		printf("\t second vector\t");
		scanf("%f", &second_v);
		printf("\t seta\t");
		scanf("%f", &thetandeg);
		thetanrad = thetandeg * M_PI / 180.0;
		result = first_v * second_v * sin(thetanrad);
		printf("the cross product is %f",result);
	}else if (task == 2)
	{
		float first_v , second_v ,thetanrad , thetandeg , result;

		printf("enter the two vectors as scale of A & B and THETA \n");
		printf("\t first vector\t");
		scanf("%f", &first_v);
		printf("\t second vector\t");
		scanf("%f", &second_v);
		printf("\t seta\t");
		scanf("%f", &thetandeg);
		thetanrad = thetandeg * M_PI / 180.0;
		result = first_v * second_v * cos(thetanrad);
		printf("the scalar product is %f",result);
	}
}
