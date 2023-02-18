//To print the pascal's triangle
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int row = 0; row < n; row++) {
		int num = 1;
		for(int s = 0; s < n - row; s++) {
			cout << " ";
		}
		for(int col = 0; col <= row; col++) {
			cout << num << " ";
			num = num * (row-col)/(col+1);
		}
		cout << endl;

	}
	return 0;
}

// Sample Input
// 4

// Sample Output
//        1
//      1   1
//    1   2   1
//  1   3   3   1
