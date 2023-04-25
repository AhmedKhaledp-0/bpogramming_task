#include <stdio.h>
/**
 * main - a function to muti two function 
 * Return: always 0 
*/
int main (void)
{
    /*enter the array*/
    float st_matrix [2][2];
    float nd_matrix [2][2];
    int i=0;
    int j=0;
    int k=0;
    int l=0;

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
        printf("Enter the st Matrix [%d] [%d]",i,j);
        scanf("%f",&st_matrix[i][j]);
        }
    }
    for (k=0;k<2;k++)
    {
        for (l=0;l<2;l++)
        {
        printf("Enter the nd Matrix [%d] [%d]",k,l);
        scanf("%f",&nd_matrix[k][l]);
        }
    }
    printf(" the first Matrix is \n");
     for(i=0;i<2;i++)
    {
        printf(" \n");
        for (j=0;j<2;j++)
        {
            printf("%.2f \t",st_matrix[i][j]);
        }
    }
     printf(" the second Matrix is \n");
    for(i=0;i<2;i++)
    {
        printf(" \n");
        for (j=0;j<2;j++)
        {
            printf("%.2f \t",nd_matrix[i][j]);
        }
    }
    float muti_mtrix [2][2];

    muti_mtrix [0][0] = (st_matrix[0][0]*nd_matrix[0][0]+st_matrix[0][1]*nd_matrix[1][0]);
    muti_mtrix [0][1] = (st_matrix[0][0]*nd_matrix[0][1]+st_matrix[0][1]*nd_matrix[1][1]);
    muti_mtrix [1][0] = (st_matrix[1][0]*nd_matrix[0][0]+st_matrix[1][1]*nd_matrix[1][0]);
    muti_mtrix [1][1] = (st_matrix[1][0]*nd_matrix[0][1]+st_matrix[1][1]*nd_matrix[1][1]);
    for(i=0;i<2;i++)
    {
        printf(" \n");
        for (j=0;j<2;j++)
        {
            printf("%.2f \t",muti_mtrix[i][j]);
        }
    }
}