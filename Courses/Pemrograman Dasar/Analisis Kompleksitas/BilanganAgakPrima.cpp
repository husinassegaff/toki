#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N, x, temp;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        temp = 0;
        cin >> x;
        bool isPrime = true;

        if (x == 1) {
            isPrime = true;
        }
        else {
            for (int j = 2; j <= sqrt(x); j++) {
                if (x % j == 0) {
                    temp++;
                    if(temp == 2){
                        isPrime = false;
                        break;
                    }
                }
            }
        }
        if (isPrime)
            cout << "YA" << endl;
        else
            cout << "BUKAN" << endl;
    }
    return 0;
}