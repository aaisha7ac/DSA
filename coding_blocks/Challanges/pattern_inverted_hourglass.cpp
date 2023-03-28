#include<iostream>
using namespace std;
int main(){
    //int col;
    int row, a,b, s;
    int N;
    cin >> N;
    int i;
    int z = 0;
    
    for ( row = 1; row <= 2*N+1; row++){
        i = N;
        int newCol;
        if(row <= N) {
            newCol = row;
        } else {
            newCol = 2*N - (row - 2);
        }
        for ( a = 1; a <= newCol; a++){
            cout << i << " ";
            i = i - 1;
        }
        for ( s = 1; s <= (2*N+1)-(2*newCol); s++){
            cout << "  ";
        }
        if(row == N+1) {
            i += 1;
            newCol -= 1;
        }
        for ( b = 1; b <= newCol; b++){
              i = i + 1;
              cout << i << " ";
            
        }
        cout << endl;

    }
  
    return 0;


}

// Sample Input
// 5

// Sample Output
// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5 