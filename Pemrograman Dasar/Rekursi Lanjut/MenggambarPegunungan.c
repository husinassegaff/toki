#include<stdio.h>

void mountain(int N){
	if(N==1) printf("*\n");
	
	else{
		mountain(N-1);
		int i;
		for(i=0;i<N;i++){
			printf("*");
		}
		printf("\n");
		mountain(N-1);
	}
}

int main(){
	int N;
	scanf("%d",&N);
	
	mountain(N);
	return 0;
}