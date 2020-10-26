#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    if(N > 50){
        return 0;
    }

    for (int i = 1; i <= N; i++)
    {
        if(i % 10 == 0){
                continue;
        }
        else if(i == 42){
                cout << "ERROR" << endl;
                break;
        }
        cout << i << endl;
    }
    return 0;
}