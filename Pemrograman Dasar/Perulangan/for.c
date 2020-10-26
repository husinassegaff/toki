#include<stdio.h>

int main(){
	int N,B,i,j = 0;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&B);
		j += B;
	}
	printf("%d\n",j);
	
	return 0;
}
