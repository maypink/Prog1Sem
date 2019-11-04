#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	//Task #1
	//to concate two strings 
	char str[100], str2[100];
	int n;
	scanf("%s %s %d", str, str2, &n);
	strncat(str, str2, n);
	printf("%s", str);

	//Task #3
	//to compare two strings
	printf("\n");
	if (strcmp(str, str2) == 0) {
		printf("The same strings");
	}
	else {
		printf("Not the same strings");
	}

	//Task #5
	//to copy the first string into the second
	printf("\n");
	char str_destination[100], str_sourse[100];
	int m;
	scanf("%s %s %d", str_destination, str_sourse, &m);
	strncpy(str_destination, str_sourse, m);
	printf("%s", str_destination);

	//Task #7
	//to determine the string length
	printf("\n");
	char str_7[100];
	scanf("%s", str_7);
	printf("%d", strlen(str_7));
	
	//Task #12
	//to determine the length of segment in the first string that does not contain symbols from the second
	printf("\n");
	char str_12[100], str_13[100];
	scanf("%s %s", str_12, str_13);
	printf("%d", strcspn(str_12, str_13));
}
