#include<stdio.h>

int faktorial(int x) {
	if(x == 1){
		return 1;
	} 
    else if(x % 2 == 0){
		return x/2 * faktorial(x-1);
	} 
    else{
		return x * faktorial(x-1);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d\n",faktorial(n));
	
	return 0;
}