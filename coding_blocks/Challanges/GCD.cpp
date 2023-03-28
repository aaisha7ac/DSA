// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the GCD of N1 and N2. Print the value returned.
#include<iostream>
using namespace std;
int main() {
	int a,b,gcd = 0;
	cin >> a >> b;
	for(int i = 2; i <= a; i++) {
		if(a % i == 0 && b % i ==0) {
			gcd = i;

		}
	}
	cout << gcd;
	return 0;
}

// Sample Input
// 16 
// 24

// Sample Output
// 8

// Explanation
// The largest number that divides both N1 and N2 is called the GCD of N1 and N2.