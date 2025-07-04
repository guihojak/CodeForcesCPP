#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int a,b,c;
	int p = 0;
	
	for(int i = 0; i<n;i++){
		cin >> a >> b >> c;
		int sum = a + b + c;
		if(sum >= 2){
			p++;
		}
	} 
	cout << p << endl;
	return 0; 
}
