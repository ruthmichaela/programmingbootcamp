#include <stdio.h>
#include <stdint.h>

int main() { //starts your program and must return int as that is the exit code.

	float price = 5.25;
	float vaSalesTax = .05;
	float totalPrice;
	
	totalPrice = (vaSalesTax * price) + price;

	printf("organic soap $%.2f \n", price);
	printf("va sales tax %f%% $%.2f \n", vaSalesTax, vaSalesTax * price);
	printf("------------------ \n");
	printf("grand total: $%.2f \n", totalPrice);

	return 0;
}

