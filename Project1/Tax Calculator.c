#include <stdio.h>
#include <math.h>

int main(void) {

	float amount = 0;
	float finalAmount = 0;

	printf("Enter dollar amount:\n");
	scanf_s("%f", &amount);

	finalAmount = amount + (0.05 * amount);
	printf("Final Amount: %.2f\n", finalAmount);

	return 0;
}