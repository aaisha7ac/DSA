//To find whether the key is present on sorted 2d-array by using matrix search

#include<iostream>
using namespace std;

int matrix_search(int a[][100],int N,int M) {
	int x;
	cin >> x;

	for(int row = 0; row < N; row++) {
		for(int col = 0; col < M; col++) {
			if(a[row][col] == x){
				return 1;
			}
		}
	}

	return 0;

}

int main() {
	int a[100][100];
	int N,M;
	cin >> N;
	cin >> M;

	for(int row = 0; row < N; row++) {
		for(int col = 0; col < M; col++) {
			cin >> a[row][col];
		}
	}

	cout << matrix_search(a,N,M) << endl;
	return 0;
}


// Output Format
// Print 1 if the element is present in the matrix, else 0.

// Sample Input
// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
//  key == 62

// Sample Output
// 0