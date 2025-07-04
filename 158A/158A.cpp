#include <iostream>
using namespace std;

int main(){
	int k, n = 0;
	int a,b = 0;
	cin >> n >> k;
	int pont [50];
	
	
	for (int x = 0;x<n;x++){
		cin >> pont[x];
	}
	
	a = pont[k-1];
	
	for(int x = 0 ; x<n;x++){
		if(pont[x] >= a && pont[x] > 0)
		b++;
	}
	cout << b << endl;
	return 0;
}
