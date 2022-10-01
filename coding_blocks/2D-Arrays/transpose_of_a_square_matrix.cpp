#include<iostream>
using namespace std;

void transpose_of_matrix(int a[][100],int N) {

    //transpose
	for(int row = 0; row < N; row++) {
		for(int col = 0; col < N; col++){
			if(row<col) {
				swap(a[row][col],a[col][row]);
			}
		}
	}
    

    //printing
	for(int row = 0; row < N; row++) {
		for(int col = 0; col < N; col++){
			cout << a[row][col] <<' ';
		}
		cout << endl;
	}
}
int main () {

	int a[100][100];
	int N;
	cin >> N;

    //taking input
	for(int row = 0; row < N; row++) {
		for(int col = 0; col < N; col++){
			cin >> a[row][col];
		}
	}
  
	transpose_of_matrix(a,N);
	return 0;
}