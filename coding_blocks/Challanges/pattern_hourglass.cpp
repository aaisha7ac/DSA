#include<iostream>
using namespace std;
int main() {
	int row, col, s, j;
    int N;
    cin >> N;
    //for upper pattern
    for ( row = N; row >= 0; row--){
        for ( s = 1; s <= N-row; s++){
            cout << " ";
        }
        for ( col = row; col >=0; col--){
            cout << col << " ";
        }
        for ( j = 1; j <= row; j++){
            cout << j << " ";
        }
        cout << endl;

    }
    //for lower pattern
    for ( row = 1; row <= N; row++){
        for ( s = 1; s <= N-row; s++){
            cout << " ";
        }
        for ( col = row; col >=0; col--){
            cout << col << " ";
        }
        for ( j = 1; j <= row; j++){
            cout << j << " ";
        }
        cout << endl;

    }
	return 0;
}

// Sample Input
// 5

// Sample Output
//  5 4 3 2 1 0 1 2 3 4 5
//    4 3 2 1 0 1 2 3 4 
//      3 2 1 0 1 2 3 
//        2 1 0 1 2 
//          1 0 1 
//            0 
//          1 0 1 
//        2 1 0 1 2 
//      3 2 1 0 1 2 3 
//    4 3 2 1 0 1 2 3 4 
//  5 4 3 2 1 0 1 2 3 4 5