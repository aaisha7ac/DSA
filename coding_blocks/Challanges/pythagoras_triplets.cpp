// Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".
#include<iostream>
using namespace std;
int main() {
	long long int N,m,n;
    cin >> N;
	if(N <=2 ) {
		cout << "-1\n";
	}
	else{	
		
		if(N%2==0) {
			m = (N/2 * N/2) - 1;
    		n = (N/2 * N/2) + 1;
			cout << m <<" "<<n <<endl;
		}
		else {
			m =(N * N - 1)/2;
			n =(N * N + 1)/2;
			cout << m <<" "<<n <<endl;
		
		}
	}
	return 0;
}



// Sample Input
// 3

// Sample Output
// 4 5
