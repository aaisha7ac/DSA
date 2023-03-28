// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
#include<iostream>
using namespace std;
int main() {
	int no;
	int sum = 0;
	while(1 == 1){
		cin >> no;
		sum = sum + no;
		if (sum >= 0) {
			cout << no << endl;
		}
		else {
			break;
		}

	}
	return 0;
}

// Sample Input
// 1
// 2
// 88
// -100
// 49

// Sample Output
// 1
// 2
// 88