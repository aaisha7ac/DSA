// Take the following as input.

// Minimum Fahrenheit value
// Maximum Fahrenheit value
// Step

// Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
// 0 -17
// 20 -6
// 40 4
// 60 15
// 80 26
// 100 37
#include<iostream>
using namespace std;
int main() {
	int min_fahr,max_fahr,steps,fahr;
	cin >> min_fahr;
	cin >> max_fahr; 
	cin >> steps;

	for(int i = min_fahr; i <= max_fahr; i = i + steps) {
		int celsius = 0.5556*(i - 32);
		cout <<i<<" "<<celsius<< endl;
		

	}
	return 0;
}

// Sample Input
// 0 
// 100 
// 20

// Sample Output
// 0 -17 
// 20 -6 
// 40 4 
// 60 15 
// 80 26 
// 100 37

// Explanation
// First number in every output line is fahrenheit, second number is celsius. The two numbers are separated by a tab.





