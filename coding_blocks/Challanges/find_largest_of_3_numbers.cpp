//Program to find the largest of 3 numbers

#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if(a > b) {
		if(a > c) {
			cout << a << endl;
		}
	} else {
		if(b > c) {
			cout << b << endl;
		} else {
			cout << c << endl;
		}
	}
	return 0;
}

// Sample Input
// 5 7 4
// Sample Output
// 7