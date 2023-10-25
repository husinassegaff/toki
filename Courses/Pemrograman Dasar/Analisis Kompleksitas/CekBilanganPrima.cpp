#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N, x;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        bool isPrime = true;

        if (x == 1) {
            isPrime = false;
        }
        else {
            for (int j = 2; j <= sqrt(x); j++) {
                if (x % j == 0) {
                    isPrime = false;
                    break;
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