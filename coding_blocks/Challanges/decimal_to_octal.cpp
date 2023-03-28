// Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int reverse = 0;
	while(n!=0) {
		reverse = reverse * 10 + n % 8;
		n = n / 8;
		
	}
	
	int octal = 0;
	while(reverse!=0) {
		octal = octal * 10 + reverse % 10;
		reverse = reverse / 10;
	}
	cout << octal;
	return 0;
}

// Sample Input
// 63

// Sample Output
// 77

// Explanation
// Both input and output are integers.