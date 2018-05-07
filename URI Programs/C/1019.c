#include <stdio.h>

int main(){
	int n, hours = 0, minutes = 0;
	scanf("%d", &n);
	while(n >= 3600){
		n = n - 3600;
		hours = hours + 1;
	}
	while(n >= 60){
		n = n - 60;
		minutes = minutes + 1;
	}
	printf("%d:%d:%d\n", hours, minutes, n);
	return 0;
}