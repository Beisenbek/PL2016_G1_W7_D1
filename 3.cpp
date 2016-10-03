#include <iostream>

using namespace std;


int main(){


	int f[2];

	for(int i = 0; i < 2;++i){
		cin >> f[i];
	}

	int s = 0;

	for(int i = 0; i < 2; ++i){
		s = s + f[i];
	}

	cout << s;


	return 0;
}