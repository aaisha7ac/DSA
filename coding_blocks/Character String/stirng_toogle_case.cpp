// Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void toogle_case(char S[1000]) {
    int len = strlen(S);
    int i = 0;
  
    for (i = 0; i < len; i++) {
		if(isupper(S[i])) {
            S[i] = tolower(S[i]);
            cout << S[i];
        }

        else{
            S[i] = toupper(S[i]);
            cout << S[i];
        }

    }

}

int main( ) {
    char S[1000];
    cin >> S;
    toogle_case(S);
	return 0;
}


// Sample Input
// abC

// Sample Output
// ABc