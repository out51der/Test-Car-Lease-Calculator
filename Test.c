#include <stdio.h>

/* Computes the total cost of leasing a car given the down payment,
   monthly rate, and number of months
*/

int main(void) {
	int downPayment;
	int paymentPerMonth;
	int numMonths;
	int totalCost;  // Computed total cost to be output

	printf("Enter down payment: ");
	scanf_s("%d", &downPayment);

	printf("Enter monthly payment: ");
	scanf_s("%d", &paymentPerMonth);

	printf("Enter number of months: ");
	scanf_s("%d", &numMonths);

	totalCost = downPayment + (paymentPerMonth * numMonths);

	printf("Total cost: %d\n", totalCost);

	return 0;
}