#include <stdio.h>

int main(){
	int day, year = 0, month = 0;
	scanf("%d", &day);
	while(day >= 365){
		day = day - 365;
		year = year + 1;
	}
	while(day >= 30){
		day = day - 30;
		month = month + 1;
	}
	printf("%d ano(s)\n", year);
	printf("%d mes(es)\n", month);
	printf("%d dia(s)\n", day);
	return 0;
}