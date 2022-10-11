//To return the character of maximum frequency

#include<iostream>
#include<cstring>
using namespace std;


char max_frequency(char S[],int len) {

	int freq[26] ={0};
    int largest = 0;
	char x;


    for(int i = 0;  i < len; i++) {
    char ch = S[i];
        int index = ch - 'a'; // mapping characters to index
        freq[index]++; // after mapping counting how many times does characters occur
    }

    
    for(int i = 0; i < 26; i++) {
        if(freq[i]>largest) {
            largest = freq[i];
            x = i + 'a';
		}
    }

	return x;

}

int main() {
    
    char S[1000];
	cin >> S;

    int len = strlen(S);
   
    cout << max_frequency(S,len) << endl;
    return 0;

}


// Sample Input
// aaabacb

// Sample Output
// a