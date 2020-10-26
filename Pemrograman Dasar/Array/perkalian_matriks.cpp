#include<stdio.h>

int main(){
	unsigned int a[100][100],b[100][100],c[100][100],i,j,k,n,m,p;
	
	scanf("%u %u %u",&n, &m, &p);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%u",&a[i][j]);
		}
	}
	
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			scanf("%u",&b[i][j]);
		}
	}
	
	for(i=0; i<n; i++) {
		for(j=0; j<p; j++){
			c[i][j]=0;
			for(k=0; k<m; k++){
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	
	for(i=0; i<n; i++) {
		for(j=0; j<p; j++){
			if(j==(p-1)){
				printf("%u\n",c[i][j]);
			} else {
				printf("%u ",c[i][j]);
			}
		}
	}
	
	return 0;
}