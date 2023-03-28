// Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,sum = 0,i = 0;
	cin >> n;
	while (n!=0) {
		int rem = n % 10;
		sum = sum + rem * pow(2,i);
		n = n / 10;
		i++;

	}
	cout << sum;
	return 0;
}

// Sample Input
// 101010

// Sample Output
// 42

// Explanation
// For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
