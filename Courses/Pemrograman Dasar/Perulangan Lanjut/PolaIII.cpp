#include <iostream>

using namespace std;

int main(){
    int N, count = 0;

    cin >> N;

    if(N > 100){
        return 0;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            cout << count % 10;
            count++;
        }
        cout << endl;
    }
    return 0;
}