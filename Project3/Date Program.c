#include <stdio.h>

int main(void) {
	/*
		GRM
		5/28/2024

		Write a program that accepts a date from the user in the form
		mm/dd/yyyy and then displays it in the form yyyymmdd:

		Enter a date (mm/dd/yyyy): 2/17/2011
		You entered the date 20110217
	*/
	int mm, dd, yyyy;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf_s("%d/%d/%d", &mm, &dd, &yyyy);
	printf("You entered the date %d%.2d%.2d", yyyy, mm, dd);

	return 0;
}