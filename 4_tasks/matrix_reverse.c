#include <stdio.h>
void Input_array(float a[3][3]);
void Cofactor(float a[3][3], float cofactor[3][3]);
void Adjoint(float adjoint[3][3], float cofactor[3][3]);
void Inverse(float inv_arr[3][3], float adjoint[3][3], float a[3][3]);
void Det(float a[3][3]);
void Runcode(void)
{
	printf("Check the Given Matrix is Invertible\n");
	printf("\tIf the determinant of the given matrix is zero, then there is no inverse for the given matrix\n");
	float a[3][3];
	Input_array(a);
	Det(a);
}
int main(void)
{
	printf("Do you want to find the inverse of a matrix   1-y 2-n  ");
	int x;
	scanf("%d", &x);
	if (x == 1)
	{
		Runcode();
	}
}
void Det(float a[3][3])
{
	float _1st, _2nd, _3rd, det;
	_1st = a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]);
	_2nd = a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]);
	_3rd = a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
	det = _1st - _2nd + _3rd;
	printf("Determinant of the Matrix : %.1f \n", det);
	if (det != 0)
	{
		printf("This matrix has an inverse\n");
		printf("now we find the Cofactor of the matrix\n");
		float cofactor[3][3];
		Cofactor(a, cofactor);
		printf("Take the Transpose of the Cofactor Matrix to get the Adjugate Matrix\n");
		float adjoint[3][3];
		Adjoint(adjoint, cofactor);
		printf("Finding the Inverse of the 3×3 Matrix\n");
		printf("\tsubstitute the value of det (a) and the adj (a)\n");
		float inv_arr[3][3];
		Inverse(inv_arr, adjoint, a);
	}
	else
	{
		printf("This matrix doesn't have an inverse.\n");
		printf("Do you want to run that again 1-y 2-n \n");
		int again;
		scanf("%d", &again);
		if (again == 1)
		{
			Runcode();
		}
	}
}
void Input_array(float a[3][3])
{
	int i = 0;
	int j = 0;

	printf("Enter the elements of a 3x3 matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("[%d][%d] : ", i, j);
			scanf("%f", &a[i][j]);
		}
	}
	/* print the array */
	printf("Your matrix:\n");
	for (i = 0; i < 3; i++)
	{
		printf("|    ");
		for (j = 0; j < 3; j++)
		{
			printf("%.1f    ", a[i][j]);
		}
		printf("|\n");
	}
}
void Cofactor(float a[3][3], float cofactor[3][3])
{
	int i = 0;
	int j = 0;
	cofactor[0][0] = (a[1][1] * a[2][2] - a[2][1] * a[1][2]);
	cofactor[0][1] = (a[1][0] * a[2][2] - a[2][0] * a[1][2]) * -1;
	cofactor[0][2] = (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

	cofactor[1][0] = (a[0][1] * a[2][2] - a[2][1] * a[0][2]) * -1;
	cofactor[1][1] = (a[0][0] * a[2][2] - a[2][0] * a[0][2]);
	cofactor[1][2] = (a[0][0] * a[2][1] - a[2][0] * a[0][1]) * -1;

	cofactor[2][0] = (a[0][1] * a[1][2] - a[1][1] * a[0][2]);
	cofactor[2][1] = (a[0][0] * a[1][2] - a[1][0] * a[0][2]) * -1;
	cofactor[2][2] = (a[0][0] * a[1][1] - a[1][0] * a[0][1]);
	printf("\nMatrix cofactor:\n");
	for (i = 0; i < 3; i++)
	{
		printf("|    ");
		for (j = 0; j < 3; j++)
		{
			printf("%.2f   ", cofactor[i][j]);
		}
		printf("|\n");
	}
}
void Adjoint(float adjoint[3][3], float cofactor[3][3])
{
	int i = 0;
	int j = 0;
	adjoint[0][0] = cofactor[0][0];
	adjoint[0][1] = cofactor[1][0];
	adjoint[0][2] = cofactor[2][0];

	adjoint[1][0] = cofactor[0][1];
	adjoint[1][1] = cofactor[1][1];
	adjoint[1][2] = cofactor[2][1];

	adjoint[2][0] = cofactor[0][2];
	adjoint[2][1] = cofactor[1][2];
	adjoint[2][2] = cofactor[2][2];
	printf("\nMatrix adjoint:\n");
	for (i = 0; i < 3; i++)
	{
		printf("|    ");
		for (j = 0; j < 3; j++)
		{
			printf("%.1f    ", adjoint[i][j]);
		}
		printf("|\n");
	}
}
void Inverse(float inv_arr[3][3], float adjoint[3][3], float a[3][3])
{
	float _1st, _2nd, _3rd, det;
	_1st = a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]);
	_2nd = a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]);
	_3rd = a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
	det = _1st - _2nd + _3rd;
	int i = 0;
	int j = 0;
	printf("\nMatrix Inverse :\n");
	// float inv_arr[3][3];
	for (i = 0; i < 3; i++)
	{
		printf("|    ");
		for (j = 0; j < 3; j++)
		{
			inv_arr[i][j] = adjoint[i][j] * 1 / det;

			printf("%.3f    ", inv_arr[i][j]);
		}
		printf("|\n");
	}
	printf("Do you want to run that again 1-y 2-n \n");
	int again;
	scanf("%d", &again);
	if (again == 1)
	{
		Runcode();
	}
}
