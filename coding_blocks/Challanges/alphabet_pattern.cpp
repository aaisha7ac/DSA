//To print the given alpahbet pattern
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 5;
    for(char i = 65 + n - 1; i >= 65; i--) {
        for(char j = i; j <= 65 + n - 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
   return 0;
}

//Input: 5;

//Output :
// E 
// D E 
// C D E 
// B C D E 
// A B C D E


