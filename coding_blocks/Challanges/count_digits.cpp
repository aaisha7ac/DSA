// Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. Print the value returned.
#include<iostream>
using namespace std;
int main() {
	int num,digit,counter = 0;
	cin >> num >> digit;
	while(num!=0) {
		if(num % 10 == digit) {
			counter++;
		}
		num = num / 10;
	}
	cout << counter;
	return 0;
}

// Sample Input
// 5433231 
// 3

// Sample Output
// 3

// Explanation
// The digit can be from 0 to 9. Assume decimal numbers.In the given case digit 3 is occurring 3 times in the given number.
