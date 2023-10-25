#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	
	if((N>0)&&(N<10)){
		printf("satuan\n");
	}
	
	else if((N>=10)&&(N<=99)){
		printf("puluhan\n");
	}
	
	else if((N>=100)&&(N<=999)){
		printf("ratusan\n");
	}
	
	else if((N>=1000)&&(N<=9999)){
		printf("ribuan\n");
	}
	
	else if((N>=10000)&&(N<=99999)){
		printf("puluhribuan\n");
	}
	return 0;
}
