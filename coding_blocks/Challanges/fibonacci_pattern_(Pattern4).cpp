// Take N (number of rows), print the following pattern.
#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int first = 0;
	int second = 1;
	int next;
	for ( int row = 1; row <= N; row++){
		for ( int col = 1; col <= row; col++){
			cout << first << "	";
			next = first + second;
			first = second;
			second = next;
			

		}
		cout << endl;
	}
	return 0;
}

// Sample Input
// 4

// Sample Output
// 0 
// 1    1 
// 2    3     5 
// 8   13    21    34

// Explanation
// Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.