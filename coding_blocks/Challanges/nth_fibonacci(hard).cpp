// Take N as input. Print Nth Fibonacci Number, given that the first two numbers in the Fibonacci Series are 0 and 1.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a = 0;
	int b = 1;
	int c = 0;
	int counter = 0;
	while(counter < n) {
		 a =  b;
	 	b = c;
	 	c = a + b;
		 counter++;

	}
	 cout << c;
	return 0;
}


// Sample Input
// 10

// Sample Output
// 55

// Explanation
// The 0th fibonnaci is 0 and 1st fibonnaci is 1.