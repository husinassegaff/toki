#include <iostream>
#include <cstdlib>

using namespace std;

void absolutfunction(int A, int B, int K, int x){
    int temp = A*x + B;

    temp = abs(temp);

    if(K > 1){
        for (int i = 2; i <= K; i++)
        {
            temp = A*temp + B;
            temp = abs(temp);
        }
    }
    cout << temp << endl;
}

int main(){
    int A,B,K,x;

    cin >> A >> B >> K >> x;

    absolutfunction(A, B, K, x);
    
    return 0;
}