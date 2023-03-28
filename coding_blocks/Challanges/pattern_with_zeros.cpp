// Take N (number of rows), print the following pattern.
#include<iostream>
using namespace std;
int main() {
	int N;
    cin >> N;
    int z=1;
    int y=0;
    for( int row=1; row<=N;row++){
        
        for( int col=1; col<=row; col++){
            if(col==1 ||col==row){
                cout << z << "  ";
            }
            else{
                cout << y <<"   ";
            }
        }
        z=z+1;
        cout << endl;
    }
	return 0;
}

// Sample Input
// 5

// Sample Output
// 1  
// 2	2  
// 3	0	3    
// 4	0	0	4  
// 5	0	0	0	5

// Explanation
// Each number is separated from other by a tab.If row number is n (>1), total character is n. First and last character is n and rest are 0.