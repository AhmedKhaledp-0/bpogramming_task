#include <stdio.h>
#include <math.h>
/**
 * main - a task to ease the orbital mechanics
 * Return: always0
 */
int choose_mission(int task);
int cross_product(void);
int scalar_product(void);
int vector_adding(void);
int vector_substraction(void);
int vector_magnitude(void);
int vector_direction(void);
int N_F_L(void);
int N_S_L(void);
int N_T_L(void);
int Linear_V_2_angularw(void);
int Linear_V_2_angularA(void);

int main(void)
{
	int task = choose_mission(task);

	if (task == 1)
	{
		cross_product();
	}
	else if (task == 2)
	{
		scalar_product();
	}
	else if (task == 3)
	{
		vector_adding();
	}
	else if (task == 4)
	{
		vector_substraction();
	}
	else if (task == 5)
	{
		vector_magnitude();
	}
	else if (task == 6)
	{
		vector_direction();
	}
	else if (task == 7)
	{
		N_F_L();
	}
	else if (task == 8)
	{
		N_S_L();
	}
	else if (task == 9)
	{
		N_T_L();
	}
	else if (task == 13)
	{
		Linear_V_2_angularw();
	}
	else if (task == 14)
	{
		Linear_V_2_angularA();
	}
}
int choose_mission(int task)
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
	scanf("%d", &task);
	return(task);
}
int cross_product(void)
{
	float first_v, second_v, thetanrad, thetandeg, result;
	
	printf("enter the two vectors as scale of A & B and THETA \n");
	printf("\t first vector\t");
	scanf("%f", &first_v);
	printf("\t second vector\t");
	scanf("%f", &second_v);
	printf("\t seta\t");
	scanf("%f", &thetandeg);
	thetanrad = thetandeg * M_PI / 180.0;
	result = first_v * second_v * sin(thetanrad);
	printf("the cross product is %f", result);

}
int scalar_product(void)
{
	float first_v, second_v, thetanrad, thetandeg, result;

	printf("enter the two vectors as scale of A & B and THETA \n");
	printf("\t first vector\t");
	scanf("%f", &first_v);
	printf("\t second vector\t");
	scanf("%f", &second_v);
	printf("\t seta\t");
	scanf("%f", &thetandeg);
	thetanrad = thetandeg * M_PI / 180.0;
	result = first_v * second_v * cos(thetanrad);
	printf("the scalar product is %f", result);
}
int vector_adding(void)
{
	float first_vector[3], second_vector[3], result [3];
	printf("components of first vector \n");
	for(int i = 0; i < 3; i++)
	{
		scanf("%f", &first_vector[i]);
	}
	printf("components of second vector \n");
	for(int i = 0; i < 3; i++)
	{
		scanf("%f",&second_vector[i]);
	}
	for(int j = 0; j < 3; j++) {
	result [j] = first_vector[j] + second_vector[j];
	}
	for(int j = 0; j < 3; j++)
	{
		printf("%.2f  \t ", result[j]);
	}
}
int vector_substraction(void)
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
		printf("%.2f  \t ",result[j]);
	}
}
int vector_magnitude(void)
{
	float i_comp, j_comp, k_comp, magnitude;
	printf(" Enter the components of the vector \n");
	scanf(" %f ", &i_comp);
	scanf(" %f ", &j_comp);
	scanf(" %f ", &k_comp);
	magnitude = sqrt(pow(i_comp, 2) + pow(j_comp, 2) + pow(k_comp, 2));
	printf("the magnitude of the vector = %.2f ", magnitude);


}
int vector_direction(void)
{
	float i_comp, j_comp, direction_rad, direction_deg ;

	printf(" Enter the direction of 2D vector \n");
	scanf(" %f ", &i_comp);
	scanf(" %f ", &j_comp);
	direction_rad = atan2(j_comp, i_comp);
	direction_deg = direction_rad * 180.0 / M_PI;
	printf("the direction of the 2D vector = %.2f ", direction_deg);
}
int N_F_L(void)
{
	printf("An object at rest remains at rest \n");
	printf("An object in motion remains in motion at constant speed and in a straight line \n");
	printf("Unless acted on by an unbalanced force \n");
}
int N_S_L(void)
{
	printf("Force = Mass * Acceleration \n");
	float mass, accelation, force;

	printf("Enter the mass and acceration \n");
	scanf("%f %f", &mass, &accelation);
	force = mass * accelation;
	printf("The force = %.2f \n ", force);
}
int N_T_L(void)
{
	printf("For every action in nature there is an equal and opposite reaction \n");
	printf("If object A exerts a force on object B, object B also exerts an equal and opposite force on object A \n");
	printf("Fb = -Fa \n ");
}
int Linear_V_2_angularw(void)
{
	printf("w = v / r \n");
	float w, v, r;

	printf("Enter the Linear velocity in m/s and Radius in m \n");
	scanf("%f %f", &v, &r);
	w = v / r;
	printf("The angular velocty = %.2f rad/sec ",w);
}
int Linear_V_2_angularA(void)
{
	printf("α = w / Δt , w = v / r \n");
	float a, w, v, t, r;

	printf("Enter the Linear velocity in m/s and Radius in m ant Time in sec \n");
	scanf("%f %f %f", &v, &r, &t);
	a = (v / r) / t;
	printf("The angular acceleration = %.2f rad/sec^2 ",a);
}

