#include <iostream>

using namespace std;


int main(){


	int a[5];
	a[0] = 1;
	a[1] = 2;
      	a[2] = 31;
	a[3] = 23;
	a[4] = 312;

        for(int k = 0; k < 5; ++k){
        	a[k] = a[k] * a[k];
        }

        cout << a[0];


	return 0;
}
