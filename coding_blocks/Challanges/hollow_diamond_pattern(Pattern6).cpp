// Take N (number of rows), print the following pattern .
#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
 int stars = (n - 1)/2;
int spaces = 1;
for(int i = 0; i < n; i++) {
    if(i == 0|| i +1 == n) {
        for(int col = 1; col <= n; col++) {
            cout <<"*" <<"	";
        }
        cout << endl;
    }
 
    else if(i <= n/2) {
       
        for(int col = 1; col <= stars; col++) {
            cout<<"*"<<"	";
        }
        for(int s = 1; s <= spaces; s++) {
            cout<<"	";
        }
         for(int col = 1; col <= stars; col++) {
            cout <<"*"<<"	";
            
        }
        cout<<endl;
        if(i!=n/2){
        spaces = spaces + 2;
        stars = stars - 1;
        }
        
         
        
    }
    else{
        stars = stars + 1;
        spaces = spaces - 2;
         for(int col = 1; col <= stars; col++) {
           cout <<"*"<<"	";
            
        }
        for(int s = 1; s <= spaces; s++) {
			cout<<"	";
        }
         for(int  col= 1;  col <= stars;  col++) {
            cout<<"*"<<"	";
            
        }
        	cout<<endl;
        
        
    }
}

    return 0;
}

// Sample Input
// 5

// Sample Output
    // * * * * *
    // * *   * *
    // *       *
    // * *   * *
    // * * * * *
    	
// Explanation
// Each '*' is separated from other by a tab.