#include <iostream>
#include <string>

using namespace std;

int jumlah;

bool palindrom(string s){
	if(jumlah==1) {
		return 1;
	}
	if(jumlah==2){
		if(s[0]==s[1])
			return 1;
		else return 0;
	}

	bool masih=(s[0]==s[jumlah-1]);
	
    s.erase(jumlah-1,1);
	s.erase(0,1);
	jumlah=s.length();
	
    return masih && palindrom(s);
}

int main() {
	string s;
	cin>>s;
	jumlah= s.length();

	if(palindrom(s)){
        cout<<"YA"<<endl;
    }
		
	else cout<<"BUKAN"<<endl;
	
	return 0;
}