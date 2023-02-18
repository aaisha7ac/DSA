//To print the hollow rombus pattern
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int row = 1; row <= n; row++) {
		for(int s = 1; s <= n - row; s++) {
			cout << " ";
		}
		if(row == 1 || row == n) {
			for(int col = 1; col <= n; col++) {
				cout <<"*";
			}
		}
		else{
			for(int col = 1; col <= n; col++) {
				if(col == 1 || col == n) {
					cout << "*";
				}
				else{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}

// Sample Input
// 5

// Sample Output
//     *****
//    *   *
//   *   *
//  *   *
// *****