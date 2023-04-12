#include <stdio.h>
int main (void)
{
    float arr [3][3];
    int i=0;
    int j=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
        printf("Enter the Array [%d] [%d]",i,j);
        scanf("%f",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
            printf("%.2f \t",arr[i][j]);
        }
    }
    printf ("the")

return 0;
}
