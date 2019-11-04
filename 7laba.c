#include <iostream>

//Task #1
//to use an enamerated data type for months
	enum Months {
		JANUARY=1,
		FEBRUARY,
		MARCH, 
		APRIL,
		MAY,
		JUNE,
		JULY,
		AUGUST,
		SEPTEMBER,
		OCTOBER,
		NOVEMBER,
		DECEMBER
	};

	int main() {
		printf("%d", JUNE);


		//Task #2
		//to develop a struct that describes coordinates or other simple parameters of rectangle
		printf("\n");

		struct rectangle {
			int length;
			int width;
		};
		struct rectangle A;
		int area;
		A.length = 10;
		A.width = 5;
		area = A.length * A.width;
		printf("%d", area);

		//Task #3
		//to develop a bit  field that describes the state of the elements of ADSL modem
		printf("\n");

		struct elements {
			unsigned DSL: 1;
			unsigned PPP: 1;
			unsigned Link: 1;
		};

		union Checker {
			unsigned number;
			struct elements Status;
		};
		union Checker CheckStatus;
		scanf("%x", &CheckStatus.number);
		printf("DSL = %d\n", CheckStatus.Status.DSL);
		printf("PPP = %d\n", CheckStatus.Status.PPP);
		printf("Link = %d\n", CheckStatus.Status.Link);
	}
