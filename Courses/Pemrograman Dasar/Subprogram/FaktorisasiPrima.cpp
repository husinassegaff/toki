#include <iostream>

using namespace std;

int main(){
   int n, factor = 2;

   cin >> n;

    while (factor < n)
    {
        if(n % factor == 0){
            int exponent = 0;
            while( n % factor == 0){
                n = n / factor;
                exponent++;
            }

            if(exponent != 1) cout << factor << "^" << exponent;
            else cout << factor;

            if(n != 1) cout << " x ";
        }
        factor++;
    }

    if(n != 1) cout << factor;

    cout << endl;
    
    return 0;
}