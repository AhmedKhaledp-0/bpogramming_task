#include <stdio.h>
int main (void)
{
    int x ,y , z;
    printf("what is the num you want\n");
    scanf("%d",&x);
    for (y=1;y<=12;y++)
    {
        z=x*y;
         printf("%d * %d = %d \n" , x ,y,z);
        
    }

 return 0;
}