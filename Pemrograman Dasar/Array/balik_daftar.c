#include <stdio.h>

int main(){
	int i,a = 0;
	int x[100001];
	
	while(scanf("%d",&x[a]) != EOF){
		a++;
	}
	
	for(i=a-1;i>=0;i--){
		printf("%d\n",x[i]);
	}
	return 0;
}
