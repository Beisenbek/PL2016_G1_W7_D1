#include <iostream>

using namespace std;


int main(){

	long long f[100];

	f[0] = 0;
	f[1] = 1;

	for(int i = 2; i <= 99; ++i){
		f[i] = f[i-1] + f[i-2];
	}

	int x;

	cin >> x;

	cout << f[x];


	return 0;
}