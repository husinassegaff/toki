#include <iostream>
using namespace std;

string cek_biner(int N){
    if (N==1) return "1";

    else if (N % 2 == 1) return cek_biner(N/2) + "1";
    
    else return cek_biner(N/2) + "0";
}

int main() {
	int n;
	scanf("%d",&n);
	
	cout<<cek_biner(n)<<endl;
	
    return 0;
}