#include <iostream>

using namespace std;


int main(){

	int a[5] = {1,2,31,23,312};

        for(int k = 0; k < 5; ++k){
        	a[k] = a[k] * a[k];
        }

        cout << a[0];


	return 0;
}
