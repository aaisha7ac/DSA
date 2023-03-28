// Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,num;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num;
		int decimal = 0;
		int j = 0;
		while(num!=0) {
			int rem = num % 10;
			decimal = decimal + rem * pow(2,j);
			j++;
			num = num / 10;
		}
		cout << decimal << endl;
	

	}
 	return 0;
}

// Sample Input
// 4
// 101
// 1111
// 00110
// 111111

// Sample Output
// 5
// 15
// 6
// 63

// Explanation
// For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.