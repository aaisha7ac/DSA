// Take N (number of rows), print the following pattern (for N = 4)

#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int x=1;
	for( int row=1; row<=N; row++){
		
		for( int col=1; col<=row; col++){
		cout << x <<"	";
			x=x+1;

		}
		cout << endl;
	}
	return 0;
}

// Sample Input
// 4

// Sample Output
// 1  
// 2	3  
// 4	5	6  
// 7	8	9	10

// Explanation
// Each number is separated from other by a tab.