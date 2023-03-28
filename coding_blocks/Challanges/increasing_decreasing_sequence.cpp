// Given a series of N Integers, check if it is possible to split sequence into two sequences -
// s1 to si and si to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

// Input Format
// First line contains a single integer N denoting the number of elements int the series.
// Next N lines contain a single integer each denoting the elements of the array S.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	if(n == 1) {
		cout << "true";
	}

	int prev;
	cin >> prev;
	n--;

	bool containsInc = false;
	string ans = "true";

	while(n--) {
		int num;
		cin >> num;

		if(num == prev) {
			ans = "false";
			break;
		}
		else if(num > prev) {
			containsInc = true;
		}

		if(containsInc) {
			if(num < prev) {
				ans = "false";
				break;
			}
		}

		prev = num;

	}

	cout << ans;

	return 0;
}

// Sample Input
// 5 
// 1 
// 2 
// 3 
// 4 
// 5

// Sample Output
// true

// Explanation
// Carefully read the conditions to judge which all sequences may be valid. Don't use arrays or lists.