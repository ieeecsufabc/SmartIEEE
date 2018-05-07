#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c, first, result;
	scanf("%d%d%d", &a, &b, &c);
	first = (a + b + abs(a - b)) / 2;
	result = (first + c + abs(first - c)) / 2;
	printf("%d eh o maior\n", result);
	return 0;
}