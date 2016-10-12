#include <stdio.h>

int main()
{
	float fRevenue, fCost;
		/* profit = revenue = cost */

	printf("\nEnter total revenue: ");
	scanf("%f", &fRevenue);

	printf("\nEnter total cost: ");
	scanf("%f", &fCost);

	printf("\nYour profit is $%.2f\n", fRevenue - fCost);
	return 0;
}
