#include <stdio.h>

int main(){
	float salary, earned;
	int percent;
	scanf("%f", &salary);
	if(salary <= 400){
		earned = salary * 0.15;
		salary = salary * 1.15;
		percent = 15;
	} else if (salary <= 800){
		earned = salary * 0.12;
		salary = salary * 1.12;
		percent = 12;
	} else if (salary <= 1200){
		earned = salary * 0.1;
		salary = salary * 1.1;
		percent = 10;
	} else if (salary <= 2000){
		earned = salary * 0.07;
		salary = salary * 1.07;
		percent = 7;
	} else {
		earned = salary * 0.04;
		salary = salary * 1.04;
		percent = 4;
	}
	printf("Novo salario: %.2f\n", salary);
	printf("Reajuste ganho: %.2f\n", earned);
	printf("Em percentual: %d %\n", percent);
	return 0;
}