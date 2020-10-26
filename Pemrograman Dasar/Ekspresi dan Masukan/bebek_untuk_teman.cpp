#include <stdio.h>

int main(){
	int M,N,O,P;
	scanf("%d %d",&M , &N);
	
	O = M / N;
	P = M % N;
	
	printf("masing-masing %d\n",O);
	printf("bersisa %d\n",P);
	
	return 0;
}
