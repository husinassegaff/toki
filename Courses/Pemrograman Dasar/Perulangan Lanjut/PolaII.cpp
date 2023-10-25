#include <iostream>

using namespace std;

int main(){
    int N, check = 1;

    cin >> N;

    if(N > 100){
        return 0;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if(j <= N - check){
                cout << " ";
                continue;
            }
            else if(j == N){
                cout << "*" << endl;
                continue;
            }
            cout << "*";
        }
        check++;
    }
    return 0;
}