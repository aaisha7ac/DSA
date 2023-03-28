// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".
#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int i;
	for ( i=2; i<N; i++){
		if(N%i==0){
			cout << "Not Prime";
			break;
			
		}
		
	}
	if( i==N){
		cout << "Prime";
	}

	return 0;
}

// Sample Input
// 3

// Sample Output
// Prime

// Explanation
// The output is case specific



