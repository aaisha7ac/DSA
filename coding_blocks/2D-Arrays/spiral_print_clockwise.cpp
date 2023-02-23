#include <iostream>
using namespace std;

void spiral_clockwise(int arr[][100],int i,int j) {
	int sr = 0,sc = 0;
	
	while(sr<i && sc<j) {
        for(int row = sr; row <i; row++) {
            cout <<arr[row][sc]<<","<<" ";
        }
        sc++;
        for(int col = sc; col<j; col++) {
            cout<<arr[i-1][col]<<","<<" ";
        }
        i--;

        if(sc<j){ 
			for(int row = i-1; row >= sr; row--) {
                cout<<arr[row][j-1]<<","<<" ";
            }
            j--;
		}
        
        if(sr<i){
			 for(int col = j-1; col >= sc; col--) {
                cout<<arr[sr][col]<<","<<" ";
            }
            sr++;
		}
    }
	cout<<"END";
}

int main()
{
    int arr[100][100];
    int M,N;
    cin >> M >> N;
    for(int row = 0; row < M; row++) {
        for(int col = 0; col < N; col++) {
            cin >> arr[row][col];
        }
    }
	spiral_clockwise(arr,M,N);
	return 0;
}

// Sample Input1
//her M deonotes the number of rows whereas N denotes the number of columns

// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44

// Sample Output1
// 11, 12, 13, 14, 24, 34, 44, 43, 42, 41, 31, 21, 22, 23, 33, 32, END

// Sample Input2
//her M deonotes the number of rows whereas N denotes the number of columns

// 2 10
// 1 2 3 4 5 6 7 8 9 0
// 1 0 2 9 3 8 4 7 5 6

// Sample Output2
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 6, 5, 7, 4, 8, 3, 9, 2, 0, 1, END

// Explanation
// For spiral level clockwise traversal, Go for first row-> last column ->last row -> first column and then do the same traversal for the remaining matrix .