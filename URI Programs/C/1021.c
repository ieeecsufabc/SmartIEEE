#include <stdio.h>

int main(){
	int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;
	int m1 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m01 = 0;
	double value;
	scanf("%lf", &value);
	while(value >= 100){
		value = value - 100;
		c100++;
	}
	while(value >= 50){
		value = value - 50;
		c50++;
	}
	while(value >= 20){
		value = value - 20;
		c20++;
	}
	while(value >= 10){
		value = value - 10;
		c10++;
	}
	while(value >= 5){
		value = value - 5;
		c5++;
	}
	while(value >= 2){
		value = value - 2;
		c2++;
	}
	while(value >= 1){
		value = value - 1;
		m1++;
	}
	while(value >= 0.5){
		value = value - 0.5;
		m50++;
	}
	while(value >= 0.25){
		value = value - 0.25;
		m25++;
	}
	while(value >= 0.1){
		value = value - 0.1;
		m10++;
	}
	while(value >= 0.05){
		value = value - 0.05;
		m5++;
	}
	while(value >= 0.01){
		value = value - 0.01;
		m01++;
	}
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100,00\n", c100);
	printf("%d nota(s) de R$ 50,00\n", c50);
	printf("%d nota(s) de R$ 20,00\n", c20);
	printf("%d nota(s) de R$ 10,00\n", c10);
	printf("%d nota(s) de R$ 5,00\n", c5);
	printf("%d nota(s) de R$ 2,00\n", c2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m1);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", m01);
	return 0;
}