#include <iostream>

using namespace std;


int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	int a[5];

	for(int i = 0; i < 5; ++i){
        	cin >> a[i];
        }

        for(int k = 0; k < 5; ++k){
        	a[k] = a[k] * a[k];
        }

        cout << a[0];


	return 0;
}