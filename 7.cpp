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

	bool found = false;


	for(int i = 0; i<100; ++i){
		if(f[i] == x){
			found = true;
			cout << i << endl;
		}
	}
                 

	if(!found){
		cout << "Not found!";
	}


	return 0;
}