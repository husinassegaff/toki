#include <iostream>

using namespace std;

int main(){
    int i, j, n;
    scanf("%d", &n);
    i=1;j=n/2;
    while(i<j){
        if(n%i==0){
            j=n/i;
            cout << i << endl;
            n = n / i;
        }
        i++;
    }

    i=j;
    while(i<=n){
        if(n%i==0){
            j=n/i;
            if(i!=j)cout << i << " " << endl;
            n = n / i;
        }
        i++;
    }
    return 0;
}