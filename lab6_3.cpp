#include<iostream>
using namespace std;

char before(char x){
	char a = x;
	if(a == 'A'){
		return 'Z';
	}else{
		if(a == '0'){
			return '0';
		}else{
		if(a<='Z'){
			return a-1;
		}else{
			return '0';
			}
		}
	}
}

int main(){

	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
