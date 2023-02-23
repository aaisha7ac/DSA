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

// Sample Input
//here M donotes the number of rows and N denotes the number of columns
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44

// Sample Output
// 11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END

// Explanation
// For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .