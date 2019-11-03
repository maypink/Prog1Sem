#include <iostream>
#include <stdio.h>

int main()
{
	int a[7] = { 23, 5678, 2, 564, 365, 77, 443 };
	for (int i = 0; i < 7; i++) {
		printf("array[");
		printf("%d", i);
		printf("] = ");
		printf("%d \n", a[i]);
	}
	printf("\n");
	int matrix1[2][2] = { {1,1}, {1, 4} };
	int matrix2[2][2] = { {1,2}, {4,1} };
	int matrix3[2][2] = { {0,0}, {0,0} };
	for (int i = 0; i < 2; i++) {
		for ( int j = 0; j < 2; j++) {
			matrix3[i][j] = matrix1[i][0] * matrix1[i][1] + matrix2[0][j] * matrix2[1][j];
		}
	}
	printf("%d \t %d \n", matrix3[0][0], matrix3[0][1]);
	printf("%d \t %d", matrix3[1][0], matrix3[1][1]);
}
