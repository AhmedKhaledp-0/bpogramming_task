#include <stdio.h>
#include <math.h>
int choose_mission(int task);
int the_mission(int task);
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
int decide(void);
/**
 * main - a task to ease the orbital mechanics
 * Return: always0
 */
int main(void)
{
    printf("Chose the task you want to do \n");

    int task = choose_mission(task);

    the_mission(task);
}
/**
 * choose_mission - a func show user alist to choose what to do
 * @task: the input of the user
 * Return: the task
 */
int choose_mission(int task)
{
    printf("    Vector operations\n");
    printf("\t1:Cross product\n");
    printf("\t2:Scalar multiplication\n");
    printf("\t3:Adding vectors\n");
    printf("\t4:Subtraction vectors\n");
    printf("\t5:Vector magnitude\n");
    printf("\t6:Vector direction\n");
    printf("    Newton's laws\n");
    printf("\t7:Newton first law\n");
    printf("\t8:Newton second law\n");
    printf("\t9:Newton third law\n");
    printf("    Linear to angular\n");
    printf("\t10:Finding angulat velocity from velocity\n");
    printf("\t11:Finding angulat acceleration from velocity \n");
    scanf("%d", &task);
    return (task);
}
/**
 * the_mission - a func let the user to choose the task
 * @task: the input of the user
 * Return: nothing
 */
int the_mission(int task)
{
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
    else if (task == 10)
    {
        Linear_V_2_angularw();
    }
    else if (task == 11)
    {
        Linear_V_2_angularA();
    }
}
/**
 * cross_product - function to cross product 2 vectors
 * Return: nothing
 */
int cross_product(void)
{
    float a[3][3];
    int i = 0;
    int j = 0;
    for (i = 1; i < 3; i++)
    {
        printf("Your %d vector :\n", i);
        for (j = 0; j < 3; j++)
        {
            printf("[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    float i_comp, j_comp, k_comp;
    i_comp = (a[1][1] * a[2][2] - a[2][1] * a[1][2]);
    j_comp = (a[1][0] * a[2][2] - a[2][0] * a[1][2]) * -1;
    k_comp = (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    printf("cross product = %.2f i %.2f j %.2f k", i_comp, j_comp, k_comp);
    decide();
}
/**
 * scalar_product - function to scalar product  2 vectors
 * Return: nothing
 */
int scalar_product(void)
{
    float f_vector[3], s_vector[3], result[3];
    int i;
    float dot;

    printf("Your first vector :\n", i);
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &f_vector[i]);
    }
    printf("Your second vector :\n", i);
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &s_vector[i]);
    }
    for (i = 0; i < 3; i++)
    {
        result[i] = f_vector[i] * s_vector[i];
    }
    for (i = 0; i < 3; i++)
    {
        dot += result[i];
    }
    printf("%f", dot);
    decide();
}
/**
 * vector_adding - function to add 2 vectors
 * Return: nothing
 */
int vector_adding(void)
{
    float first_vector[3], second_vector[3], result[3];

    printf("components of first vector i j k \n");
    for (int i = 0; i < 3; i++)
        scanf("%f", &first_vector[i]);
    printf("components of second vector i j k \n");
    for (int i = 0; i < 3; i++)
        scanf("%f", &second_vector[i]);
    for (int j = 0; j < 3; j++)
        result[j] = first_vector[j] + second_vector[j];
    for (int j = 0; j < 3; j++)
        printf("%.2f  \t ", result[j]);
    decide();
}
/**
 * vector_substraction - function substract 2 vectors
 * Return: nothing
 */
int vector_substraction(void)
{
    float first_vector[3], second_vector[3], result[3];

    printf("components of first vector i j k \n");
    for (int i = 0; i < 3; i++)
        scanf("%f", &first_vector[i]);
    printf("components of second vector i j k \n");
    for (int i = 0; i < 3; i++)
        scanf("%f", &second_vector[i]);
    for (int j = 0; j < 3; j++)
        result[j] = first_vector[j] - second_vector[j];
    for (int j = 0; j < 3; j++)
        printf("%.2f  \t", result[j]);
    decide();
}
/**
 * vector_magnitude - function to find the magnitude of a vector
 * Return: nothing
 */
int vector_magnitude(void)
{
    float i_comp, j_comp, k_comp, magnitude;

    printf(" Enter the components of the vector i j k \n");
    scanf(" %f %f %f", &i_comp, &j_comp, &k_comp);
    magnitude = sqrt(pow(i_comp, 2) + pow(j_comp, 2) + pow(k_comp, 2));
    printf("the magnitude of the vector = %.2f ", magnitude);
    decide();
}
/**
 * vector_direction - function to find vector direction
 * Return: nothing
 */
int vector_direction(void)
{
    float i_comp, j_comp, direction_rad, direction_deg;

    printf(" Enter the direction of 2D vector i j \n");
    scanf(" %f %f", &i_comp, &j_comp);
    direction_rad = atan2(j_comp, i_comp);
    direction_deg = direction_rad * 180.0 / M_PI;
    printf("the direction of the 2D vector = %.2f ", direction_deg);
    decide();
}
/**
 * N_F_L - fuction to show newton first low
 * Return: nothing
 */
int N_F_L(void)
{
    printf("An object at rest remains at rest \n");
    printf("An object in motion remains in motion \n");
    printf("at constant speed in a straight line\n");
    printf("Unless it was acted on by an unbalanced force \n");
    decide();
}
/**
 * N_S_L -fuction to show newton second law
 * Return: nothing
 */
int N_S_L(void)
{
    printf("Force = Mass * Acceleration \n");
    float mass, accelation, force;

    printf("Enter the mass and acceration \n");
    scanf("%f %f", &mass, &accelation);
    force = mass * accelation;
    printf("The force = %.2f \n ", force);
    decide();
}
/**
 * N_T_L - fuction to show newton second law
 * Return: nothing
 */
int N_T_L(void)
{
    printf("For every action there is an equal and opposite reaction\n");
    printf("If object A exerts a force on object B \n");
    printf("object B also exerts an equal and opposite force on object A \n");
    printf("Fb = -Fa \n ");
    decide();
}
/**
 * Linear_V_2_angularw - function to find angular velocity from linear velocity
 * Return: nothing
 */
int Linear_V_2_angularw(void)
{
    printf("w = v / r \n");
    float w, v, r;

    printf("Enter the Linear velocity in m/s and Radius in m \n");
    scanf("%f %f", &v, &r);
    w = v / r;
    printf("The angular velocty = %.2f rad/sec ", w);
    decide();
}
/**
 * Linear_V_2_angularA - function to find angular acceleration from velocity
 * Return: nothing
 */
int Linear_V_2_angularA(void)
{
    printf("α = w / Δt , w = v / r \n");
    float a, w, v, t, r;

    printf("Enter the Linear velocity in m/s and Radius in m ant Time in sec \n");
    scanf("%f %f %f", &v, &r, &t);
    a = (v / r) / t;
    printf("The angular acceleration = %.2f rad/sec^2 ", a);
    decide();
}
/**
 * decide - function let user to choose if he need to run the code again
 * Return: nothing
 */
int decide(void)
{
    int x;

    printf("\nDo you want to do another mission 0 or 1 \t");
    scanf("%d", &x);
    if (x == 0)
    {
        int task = choose_mission(task);

        the_mission(task);
    }
}