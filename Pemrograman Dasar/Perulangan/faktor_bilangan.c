#include<stdio.h>

int main(){
	int a;
	int N;
	
	scanf("%d",&N);
	
	for(a=N;a>0;a--){
		if(N%a==0){
			printf("%d\n",a);
		}
	}
		return 0;
}
