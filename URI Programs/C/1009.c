#include <stdio.h>

int main(){
	char name[20];
	double salary, sales, result;
	scanf("%s", name);
	scanf("%lf", &salary);
	scanf("%lf", &sales);
	result = salary + (sales*0.15);
	printf("TOTAL = R$ %.2lf\n", result);
	return 0;
}