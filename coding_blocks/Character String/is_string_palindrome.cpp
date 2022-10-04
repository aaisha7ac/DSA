//Take as input S, a string. Write a function that returns true if the string is a palindrome and false otherwise. Print the value returned.
#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(char S[]){
	int i = 0;
	int j = strlen(S)-1;
	while(i < j) {
		if(S[i] != S[j]) {
			return false;

		}
        i++;
        j--;
	}

	return true;
}
int main() {

	char S[1000];
	cin >> S;

	bool ans = palindrome(S);

    if(ans == true) {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }


	return 0;
}


// Sample Input
// abba
// Sample Output
// true