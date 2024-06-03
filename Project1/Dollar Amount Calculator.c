#include <stdio.h>

int main(void) {
	
	int bills, amount = 0;

	printf("Enter dollar amount: ");
	scanf_s("%d", &amount);
	
	bills = amount / 20;
	printf("\n$20 bills: %d\n", bills);

	amount = amount - (bills * 20); 

	bills = amount / 10;
	printf("$10 bills: %d\n", bills);

	amount = amount - (bills * 10);

	bills = amount / 5;
	printf("$5 bills: %d\n", bills);

	amount = amount - (bills * 5);

	bills = amount / 1;
	printf("$1 bills: %d\n", bills);

	return 0;
}