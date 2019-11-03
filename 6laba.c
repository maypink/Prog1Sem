#include <iostream>
#include <malloc.h>

int main()
{
	//Task 1
	float array[4];
	float* pointer_to_array = array;
	array[0] = 56.4;
	array[1] = 36.5;
	array[2] = 7.7;
	array[3] = 44.3;
	for (int i = 0; i < 4; i++) {
		printf("%.1f\t", *(pointer_to_array + i));
	}
	printf("\n");
	//Task 2
	float* a;
	int n;
	scanf("%d", &n);
	a = (float*)malloc(n*sizeof(float));
	a[0] = 56.4;
	a[1] = 36.5;
	a[2] = 7.7;
	a[3] = 44.3;
	for (int i = 0; i < 4; i++) {
		printf("%.1f\t", a[i]);
	}
	free(a);
}
