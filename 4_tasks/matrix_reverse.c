#include <stdio.h>
int adj(float arr[3][3]);
/**
 * main - a function to find the inverse of an a array from 0 to hero
 * Return: always 0
*/
int main(void)
{
	/*enter the array*/
	float arr[3][3];

	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter the Array [%d] [%d]", i, j);
			scanf("%f", &arr[i][j]);
		}
	}
	/*print the array*/
	for (i = 0; i < 3; i++)
	{
		printf(" \n");
		for (j = 0; j < 3; j++)
		{
			printf("%.2f \t", arr[i][j]);
		}
	}
	/*find the diametre of the array*/
	float _1st, _2nd, _3rd, det;

	_1st = arr[0][0] * (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2]);
	_2nd = arr[0][1] * (arr[1][0] * arr[2][2] - arr[2][0] * arr[1][2]);
	_3rd = arr[0][2] * (arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1]);
	printf("the matrix is : %f - %f + %f ", _1st, _2nd, _3rd);
	det = _1st - _2nd + _3rd;
	printf("the matrix is : %f", det);
	adj(arr);
	/*find the inverse of the array*/
	float rev_arr[3][3], in_det;

	in_det = 1 / det;
	rev_arr[0][0] = (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2]) * in_det;
	rev_arr[1][0] = (arr[1][2] * arr[2][0] - arr[2][2] * arr[1][0]) * -1 * in_det;
	rev_arr[2][0] = (arr[1][0] * arr[2][1] - arr[2][2] * arr[1][0]) * in_det;
	rev_arr[0][1] = (arr[0][2] * arr[2][1] - arr[2][2] * arr[0][1]) * -1 * in_det;
	rev_arr[1][1] = (arr[0][0] * arr[2][2] - arr[2][0] * arr[0][2]) * in_det;
	rev_arr[2][1] = (arr[1][0] * arr[2][1] - arr[2][2] * arr[1][0]) * -1 * in_det;
	rev_arr[0][2] = (arr[0][1] * arr[1][2] - arr[1][1] * arr[0][2]) *  in_det;
	rev_arr[1][2] = (arr[0][2] * arr[1][0] - arr[1][2] * arr[0][0]) * -1 * in_det;
	rev_arr[2][3] = (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]) * in_det;
	/*print the reverse of the array*/
	for (i = 0; i < 3; i++)
	{
		printf(" \n");
		for (j = 0; j < 3; j++)
		{
			printf("%.3f \t", rev_arr[i][j]);
		}
	}
	return (0);
}
/**
 * adj  - function to find the adj of matrix
 * @arr: the matrix we want to reverse
 * Return: thr adj of matrix
 */
int adj(float arr[3][3])
{
	float adj_arr[3][3];

	adj_arr[0][0] = (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2]);
	adj_arr[1][0] = (arr[1][2] * arr[2][0] - arr[2][2] * arr[1][0]) * -1;
	adj_arr[2][0] = (arr[1][0] * arr[2][1] - arr[2][2] * arr[1][0]);
	adj_arr[0][1] = (arr[0][2] * arr[2][1] - arr[2][2] * arr[0][1]) * -1;
	adj_arr[1][1] = (arr[0][0] * arr[2][2] - arr[2][0] * arr[0][2]);
	adj_arr[2][1] = (arr[1][0] * arr[2][1] - arr[2][2] * arr[1][0]) * -1;
	adj_arr[0][2] = (arr[0][1] * arr[1][2] - arr[1][1] * arr[0][2]);
	adj_arr[1][2] = (arr[0][2] * arr[1][0] - arr[1][2] * arr[0][0]) * -1;
	adj_arr[2][3] = (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]);
	return (adj_arr[3][3]);

}

