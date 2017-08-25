#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main() {
	bool teagueLikesMilk = true;
	printf("size of bool: %lu bytes \n", sizeof(bool));

	char firstLetterOfMyName = 'r';
	printf("my name begins with %c \n", firstLetterOfMyName);
	printf("size of char: %lu bytes \n", sizeof(char));

	int intelligenceLevel = 987888978;
	printf("my intelligence level is %d \n", intelligenceLevel);
	printf("size of int: %lu bytes \n", sizeof(int));
	printf("int max %d, int min %d \n", INT_MAX, INT_MIN);

	unsigned int levelOfHappiness = 10; 
	printf("size of unsigned int: %lu bytes \n", sizeof(unsigned int));
	printf("unsigned int max %ud \n", UINT_MAX);

	short int monthlyIncome = -5000; 
	printf("size of short int: %lu bytes \n", sizeof(short int));
	printf("short int max %d, short int min %d \n", SHRT_MAX, SHRT_MIN);	

	unsigned short int costOfTruck = 8000;
	printf("size of unsigned short int: %lu bytes \n", sizeof(unsigned short int));
	printf("unsigned short int max %u \n", USHRT_MAX);	

	long int costOfHouse = 3000500;
	printf("size of long int: %lu bytes \n", sizeof(long int));
	printf("long int max %ld, long int min %ld \n", LONG_MAX, LONG_MIN);	

	unsigned long int costOfBoat = 20550;
	printf("size of unsigned long int: %lu bytes \n", sizeof(unsigned long int));
	printf("unsigned long int max %lu \n", ULONG_MAX);	

	float temperatureInFar = 98.6;
	printf("my body temp is normal at %f \n", temperatureInFar);
	printf("size of float: %lu bytes \n", sizeof(float));

	double preciseTemp = 98.6;
	printf("my real body temp is normat at %f \n", preciseTemp);
	printf("size of double: %lu bytes \n", sizeof(double));

	return 0;
}