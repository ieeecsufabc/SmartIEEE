/*--------------------------------------------------------------------*\
  Link: https://csacademy.com/contest/interview-archive/task/bit-count/
\*--------------------------------------------------------------------*/

#include <stdio.h>

int main(void) {
	int i = 0, n = 1, j;
	scanf("%d", &n);
	while(n > 0){
    if (n%2 == 1){
     i++;
    }
		n = n/2;
	}
  printf("%d", i);
	return 0;
}