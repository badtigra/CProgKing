#include <stdio.h>

int main(void) {
	
	/*
		GRM
		5/28/2024

		Write a program that formats product information entered by
		the user. A session with the program should look like this:

		Enter item number: 583
		Enter unit price: 13.5
		Enter purchase date (mm/dd/yyyy): 8/20/2013

       Item            Unit            Purchase
                       Price           Date
       583             $  13.50        08/20/2013

		The item number and date should be left justified; the unit
		price should be right justified. Allow dollar amounts up to
		$9999.99. Hint: Use tabs to line up the columns.
	*/
	
	int item_Number, day, month, year;
	float unit_Price;

	printf("Enter item number: ");
	scanf_s("%d", &item_Number);
	printf("Enter unit price: ");
	scanf_s("%f", &unit_Price);
	printf("Enter purchase date: ");
	scanf_s("%d/%d/%d", &day, &month, &year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%.2f\t\t%d/%d/%d", item_Number, unit_Price, day, month, year);

}