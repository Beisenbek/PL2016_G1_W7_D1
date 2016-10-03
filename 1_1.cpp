#include <iostream>

using namespace std;


int main(){


	int f[2];

	f[0] = 1;
	f[1] = 2;

	cout << *f + *(f+1);


	return 0;
}