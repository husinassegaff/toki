#include<stdio.h>

int main(){
	int N,K;
	int i;
	int x;
	
	scanf("%d %d",&N ,&K);
	x = K;
	for(i=1;i<=N;i++){
		if(i==K){
			printf("*");
			K += x;
		}
		else{
			printf("%d",i);
		}
		
		if(i<N){
			printf(" ");
		}
		else{
			printf("\n");
		}
		
	}
	
	return 0;
}
