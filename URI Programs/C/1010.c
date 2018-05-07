#include <stdio.h>

int main(){
	int code1, code2, units1, units2;
	float value1, value2, result;
	scanf("%d", &code1);
	scanf("%d", &units1);
	scanf("%f", &value1);
	scanf("%d", &code2);
	scanf("%d", &units2);
	scanf("%f", &value2);
	result = (units1 * value1) + (units2 * value2);
	printf("VALOR A PAGAR: R$ %.2f\n", result);
	return 0;
}