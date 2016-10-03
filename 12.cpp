#include <iostream>
#include <time.h>

using namespace std;


int main(){
	
	/* initialize random seed: */
	srand (time(NULL));

	
	int x = rand()%100;

	cout << x;

	return 0;
}

