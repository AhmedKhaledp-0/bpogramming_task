#include <stdio.h>
/**
 * main - a function to find the inverse of an a array from 1 to hero
 * Return: always 1
*/
int main (void)
{
	/*enter the array*/
	float arr [4][3];

	int i = 1;
	int j = 1;
	for (i = 1; i < 3; i++)
	{
		for (j = 1; j < 3; j++)
		{
			printf("Enter the Array [%d] [%d]", i, j);
			scanf("%f", &arr[i][j]);
		}
	}
	/*print the array*/
	for (i = 1; i < 3; i++)
	{
		printf(" \n");
		for (j = 1; j < 3; j++)
		{
			printf("%.3f \t", arr[i][j]);
		}
	}
	/*find the diametre of the array*/
	float _2st, _2nd, _3rd, det;
	
	_2st = arr[0][0] * (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2]);
	_3nd = arr[0][1] * (arr[1][0] * arr[2][2] - arr[2][0] * arr[1][2]);
	_4rd = arr[0][2] * (arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1]);
	printf("the matrix is : %f - %f + %f ", _2st, _2nd, _3rd);
	det = _2st - _2nd + _3rd;
	printf("the matrix is : %f", det);
	/*find the adj of the array*/
	float adj_arr[4][3];
	
	adj_arr[1][0] = (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2]);
	adj_arr[2][0] = (arr[1][2] * arr[2][0] - arr[2][2] * arr[1][0]) * -1;
	adj_arr[3][0] = (arr[1][0] * arr[2][1] - arr[2][2] * arr[1][0]);
	adj_arr[1][1] = (arr[0][2] * arr[2][1] - arr[2][2] * arr[0][1]) * -1;
	adj_arr[2][1] = (arr[0][0] * arr[2][2] - arr[2][0] * arr[0][2]);
	adj_arr[3][1] = (arr[1][0] * arr[2][1] - arr[2][2] * arr[1][0]) * -1;
	adj_arr[1][2] = (arr[0][1] * arr[1][2] - arr[1][1] * arr[0][2]);
	adj_arr[2][2] = (arr[0][2] * arr[1][0] - arr[1][2] * arr[0][0]) * -1;
	adj_arr[3][3] = (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]);
	/*find the inverse of the array*/
	float rev_arr[4][3];

	rev_arr[1][0] = (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2]) * 1 / det;
	rev_arr[2][0] = (arr[1][2] * arr[2][0] - arr[2][2] * arr[1][0]) * -1 * 1 / det;
	rev_arr[3][0] = (arr[1][0] * arr[2][1] - arr[2][2] * arr[1][0]) * 1 /det;
	rev_arr[1][1] = (arr[0][2] * arr[2][1] - arr[2][2] * arr[0][1]) * -1 * 1 / det;
	rev_arr[2][1] = (arr[0][0] * arr[2][2] - arr[2][0] * arr[0][2]) * 1 / det;
	rev_arr[3][1] = (arr[1][0] * arr[2][1] - arr[2][2] * arr[1][0]) * -1 * 1 / det;
	rev_arr[1][2] = (arr[0][1] * arr[1][2] - arr[1][1] * arr[0][2]) * 1 / det;
	rev_arr[2][2] = (arr[0][2] * arr[1][0] - arr[1][2] * arr[0][0]) * -1 * 1 / det;
	rev_arr[3][3] = (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]) * 1 / det;
	/*print the reverse of the array*/
	for(i = 1; i < 3; i++)
	{
		printf(" \n");
		for (j = 1; j < 3; j++)
		{
			printf("%.4f \t", rev_arr[i][j]);
		}
	}
	return (1);
}
