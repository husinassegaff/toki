#include <stdio.h>

int main(){
	int input,sum = 0;

	
	while(scanf("%d",&input) != EOF){
		sum += input;
        input = 0;
	}

    printf("%d\n",sum);

	return 0;
}
