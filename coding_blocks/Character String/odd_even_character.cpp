//Take as input S, a string. Write a function that replaces every even character with the character having just higher ASCII code and every odd character with the character having just lower ASCII code. Print the value returned.

#include<iostream>
#include<cstring>
using namespace std;

int main() {

    char S[1000];
    char A[1000];
    cin >> S;
    int len = strlen(S);

    for(int i = 0; i < len; i++) {
        if(i%2 == 0) {
            A[i] = S[i] + 1;
        }
        else{
            A[i] = S[i] - 1;
        }
    }

    for(int i = 0; i < len; i++) {
        cout << A[i];
    }
    
    return 0;

}

// Sample Input
// abcg

// Sample Output
// badf