/* zadacha 72 max in array*/
#include <iostream>

using namespace std;



int main(){

        freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; ++i){
        	cin >> a[i];
        }

        int m = a[0];

        for(int i = 1; i < n; ++i){
        	m = max(m,a[i]);
        }

        cout << m;
	

	return 0;
}
