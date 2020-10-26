#include<stdio.h>
#include<math.h>

int main(){
	int x1,x2,y1,y2,a,b,c;
	
	scanf("%d %d %d %d",&x1 ,&y1, &x2, &y2);
	
	a = x2 - x1;
	b = y2 - y1;
	
	if((a>=0)&&(b>=0)){
	
		c = a + b;
	}
	
	else if((a<0)&&(b>=0)){
		a -= 2*a;
		c = a + b;
	}
	
	else if((a>=0)&&(b<0)){
		b -= 2*b;
		c = a + b;
	}
	
	else if((a<0)&&(b<0)){
		a -= 2*a;
		b -= 2*b;
		c = a + b;
	}
	
	printf("%d\n", c);
	
	return 0;
}
