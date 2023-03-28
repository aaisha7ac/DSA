// Take N (number of rows), print the following pattern.
#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int col_1;
    int z;
    for ( int row = 1; row <= N; row++){
        for ( col_1 = 1; col_1 <= row; col_1++){
            cout << col_1 << " ";

        }
        for ( int s = 1; s <= (2*N-1)-(2*row); s++){
            cout << "  ";
        }
        int col_2;
        if ( row == N){
            col_2 = row-1;
        }
        else{
            col_2 = row;
        }
        for( z = col_2; z >= 1; z--){
            cout << z << " ";
        }
        cout << endl;
        
    }
    return 0;
}

// Sample Input
// 4

// Sample Output
// 1						1
// 1	2				2	1
// 1	2	3		3	2	1
// 1	2	3	4	3	2	1