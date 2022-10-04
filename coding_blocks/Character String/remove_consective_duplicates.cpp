// Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.
#include<iostream>
#include<cstring>
using namespace std;

void removeduplicates(char S[]) {
	int len = strlen(S);
	int i = 0, j = 1;
	while(i < len) {
		if(S[i]!=S[j]) {
			i++;
			S[i] = S[j];
		}

		j++;
	}

	S[i+1] = '\0';
	cout << S << endl;
}

int main() {
	char S[1000];
	cin >> S;
	removeduplicates(S);
	return 0;
}

// Sample Input
// aaabacb
// Sample Output
// a