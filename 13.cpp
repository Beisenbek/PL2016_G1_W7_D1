#include <iostream>
#include <time.h>

using namespace std;


int main(){


	int a[5];

	srand(time(NULL));

	for(int i = 0; i < 5; ++i){
        	a[i] = rand()%100;
        }

        for(int k = 0; k < 5; ++k){
        	a[k] = a[k] * a[k];
        }

        cout << a[0];


	return 0;
}