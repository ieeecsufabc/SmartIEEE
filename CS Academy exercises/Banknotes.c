/*--------------------------------------------------------------------*\
  Link: https://csacademy.com/contest/interview-archive/task/banknotes/
\*--------------------------------------------------------------------*/

#include <stdio.h>

int main(void) {
	unsigned int A,B,S,N;
  scanf("%d %d %d %d", &A, &B, &S, &N);
  if((A*N)<=S || (B*N)<=S){
      while(A*N != S){
        S = S-B;
        N--;
      } 
      printf("%d", N);
    }else{
    printf("-1");
  } 
	return 0;
}