// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
#include<iostream>
using namespace std;
int main() {
	int N1,N2;
	cin >> N1 >> N2;
	int counter = 0,n=1;

	while(counter < N1) {
		int num = 3 * n + 2;
		if(num % N2 != 0) {
			cout << num << endl;;
			counter++;
		}
		n++;
		
	}
	
	return 0;
}

// Sample Input
// 10 
// 4

// Sample Output
// 5 
// 11 
// 14 
// 17 
// 23 
// 26 
// 29 
// 35 
// 38 
// 41

// Explanation
// The output will've N1 terms which are not divisible by N2.