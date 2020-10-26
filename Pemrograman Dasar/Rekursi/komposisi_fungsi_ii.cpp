#include<stdio.h>

int fungsi(int a,int b,int k,int x){
 
 if (k<=0) return x;
 if ((a*fungsi(a,b,k-1,x)+b)<0) return ((-1)*(a*(fungsi(a,b,k-1,x))+b));
 else return (a*(fungsi(a,b,k-1,x))+b);
}

int main(){
 
 int A,B,K,x;
 scanf("%d %d %d %d",&A,&B,&K,&x);
 int z=fungsi(A,B,K,x);

 printf("%d\n",z);
 return 0;
}