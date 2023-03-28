// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the LCM of N1 and N2. Print the value returned.
#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin >> n1 >> n2;
	int max = n1 > n2 ? n1 : n2;
	while(1) {
		if(max % n1 == 0 && max % n2 ==0) {
			break;
		}
		max++;
	}
	cout << max;
	return 0;
}

// Sample Input
// 4 
// 6

// Sample Output
// 12

// Explanation
// The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.