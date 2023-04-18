#include <stdio.h>
#include <math.h>
/**
 * main - a task to ease the orbital mechanics
 * Return: always0
 */
int main (void)
{
	printf("chose the task you want to do \n");
	printf("    Vector operations\n");
	printf("\t1:Cross product\n");
	printf("\t2:scalar multiplication\n");
	printf("\t3:adding vectors\n");
	printf("\t4:Subtraction vectors\n");
	printf("\t5:vector magnitude\n");
	printf("\t6:vector direction\n");
	printf("    Newton's laws\n");
	printf("\t7:Newton first law\n");
	printf("\t8:Newton second law\n");
	printf("\t9:Newton third law\n");
	int task ;

	scanf("%d", &task);
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
	}else if (task == 3)
	{
		float first_vector[3], second_vector[3] , result [3];

		printf("components of first vector \n");
		for (int i = 0 ; i < 3 ; i++)
		{
			scanf("%f",&first_vector[i]);
		}
		printf("components of second vector \n");
		for (int i = 0 ; i < 3 ; i++)
		{
			scanf("%f",&second_vector[i]);
		}
		for (int j = 0; j < 3; j++) {
		result [j]= first_vector[j] + second_vector[j] ;
		}
		for (int j = 0 ; j < 3 ; j++)
		{
			printf("%f.2  \t ",result[j]);
		}

	}else if (task == 4)
	{
		float first_vector[3], second_vector[3] , result [3];

		printf("components of first vector \n");
		for (int i = 0 ; i < 3 ; i++)
		{
			scanf("%f",&first_vector[i]);
		}
		printf("components of second vector \n");
		for (int i = 0 ; i < 3 ; i++)
		{
			scanf("%f",&second_vector[i]);
		}
		for (int j = 0; j < 3; j++) {
		result [j]= first_vector[j] - second_vector[j] ;
		}
		for (int j = 0 ; j < 3 ; j++)
		{
			printf("%f.2  \t ",result[j]);
		}
	}else if (task == 5){
		float i_comp, j_comp, k_comp, magnitude;
		printf(" Enter the components of the vector \n");
		scanf(" %f ", &i_comp);
		scanf(" %f ", &j_comp);
		scanf(" %f ", &k_comp);
		magnitude = sqrt(pow(i_comp, 2) + pow(j_comp, 2) + pow(k_comp, 2));
		printf("the magnitude of the vector = %f ",magnitude);

	}
	else if (task == 6){
		float i_comp, j_comp, direction_rad, direction_deg ;
		printf(" Enter the direction of 2D vector \n");
		scanf(" %f ", &i_comp);
		scanf(" %f ", &j_comp);
		direction_rad = atan2(j_comp, i_comp);
		direction_deg = direction_rad * 180.0 / M_PI;
		printf("the direction of the 2D vector = %f ",direction_deg);

	}
}
