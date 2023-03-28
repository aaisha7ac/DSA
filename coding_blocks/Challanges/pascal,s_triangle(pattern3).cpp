// Take N (number of rows), print the following pattern.
#include<iostream>
using namespace std;
int main() {
	int N;
    cin >> N;
    int col;
    
    for( int row=1; row<=N;row++){
        int s;
        for ( s = 1; s <= N-row; s++){
            cout <<"    ";
        }
        
        for( col = row; col <= 2*row - 1; col++) {
            cout << col << "    ";
            
        }
        for( int j = col-2; j>=row; j--){
            cout << j <<"   ";
        }
        cout << endl;
    }
	return 0;
}

// Sample Input
// 6

// Sample Output
// 1  
// 1	1  
// 1	2	1  
// 1	3	3	1  
// 1	4	6	4	1  
// 1	5	10	10	5	1

// Explanation
// Each number is separated from other by a tab.