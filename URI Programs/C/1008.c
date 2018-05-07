#include <stdio.h>

int main(){
	int NUMBER, HOURS;
	float PRICE, SALARY;
	scanf("%d", &NUMBER);
	scanf("%d", &HOURS);
	scanf("%f", &PRICE);
	SALARY = HOURS * PRICE;
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2f\n", SALARY);
	return 0;
}