#include <iostream>
using namespace std;

int main(){
	int n = 0;
	int x = 0;
	cin >> n;
	
	string str;
	for(int i = 0; i < n ; i++){
		cin >> str;
		if(str.find("++") != string::npos){
			x++;
		}else if(str.find("--") != string::npos){
			x--;
		}
	}
	cout << x << endl;
	return 0;
}
