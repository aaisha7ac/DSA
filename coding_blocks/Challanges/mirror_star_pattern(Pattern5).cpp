// Take N (number of rows - only odd numbers allowed), print the following pattern .
#include<iostream>
using namespace std;
int main() {
	   int n;
   cin >> n;
   int stars = 1;
   for(int i = n/2; i >=0; i--) {
       int spaces = n - (i + stars);
       for(int s = 1; s <= spaces; s++) {
           cout<<"	";
       }
       for(int j = 1; j <= stars; j++) {
           
         cout<<"*";
		   cout<<"	";
          
       }
       stars = stars + 2;
       cout<<endl;;
   }
   int spaces = 1;
   stars = stars - 4;
   for(int i = n/2 + 1; i < n; i++) {
       for(int s = 1; s <= spaces; s++) {
           cout<<"	";
       }
       spaces = spaces + 1;
       
       for(int j = 1; j <= stars; j++) {
           
           cout<<"*";
		   cout<<"	";
           
       }
       stars = stars - 2;
       cout << endl;
       
   }

    return 0;
}

// Sample Input
// 5

// Sample Output
//       *
//     * * *
//   * * * * *
//     * * *
//       *

// Explanation
// Each '*' is separated from other by a tab.