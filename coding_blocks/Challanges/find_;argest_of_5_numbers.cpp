// Read as input 5 Numbers and print the largest out of them.
#include<iostream>
#include<climits>
using namespace std;
int main () {
	int largest = INT_MIN;
	for( int i = 1; i <= 5; i++ ) {
		int no;
		cin >> no;
		if ( no >= largest ) {
			largest = no;
		}
	}
	cout << largest;
	return 0;
}

// Sample Input
// 2 4 7 -2 3

// Sample Output
// 7

// Explanation
// In the given case 7 is largest among the given numbers.