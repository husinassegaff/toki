#include<stdio.h>
#include<math.h>

int main(){
	double x;
	long int a, b;
	
	scanf("%lf",&x);
	
	if(x == trunc(x)){
		x = trunc(x);
		printf("%.0lf %.0lf\n",x,x);
	}
	
	else if(x < 0){
		a = trunc(x);
		b = a - 1;
		printf("%ld %ld\n",b ,a);
	}
	
	else if(x > 0){
		a = trunc(x);
		b = a + 1;
		printf("%ld %ld\n",a, b);
	}
	
	return 0;
}
