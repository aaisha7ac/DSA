// //To count characters frequency

#include<iostream>
#include<cstring>
using namespace std;

int main() {

    char a[1000];
    int freq[26] ={0};
    cin.getline(a,1000);

    for(int i = 0;  a[i]!= '\0'; i++) {
        char ch = a[i];
        int index = ch - 'a'; // mapping characters to index
        freq[index]++; // after mapping counting how many times does characters occur
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i]>0) {
            char x = i + 'a';
            cout << "Ferequency of character" << ' ' << x << ' '<< "is" << ' ' << freq[i] << endl;
        }
    }

    return 0;

}


// Input:
// aabbbs

// Output:
// Ferequency of character a is 2
// Ferequency of character b is 3
// Ferequency of character s is 1