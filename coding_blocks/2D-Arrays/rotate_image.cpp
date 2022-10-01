//To rotate the array 90 degrees anti-clockwise
#include<iostream>
using namespace std;

void rotateimage(int a[][100],int N) {

    //transverse the row
	for(int row = 0; row < N; row++) {
		int x = 0, y = N-1;
		while(x<y){
			swap(a[row][x],a[row][y]);
            x++;
            y--;
		}
	}

    //transpose
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(i < j) {
				swap(a[i][j],a[j][i]);
			}
		}
	}

    //printing the output
    for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
				cout << a[i][j] <<' ';
		}
			cout << endl;
	}

}


int main( ) {
    int a[100][100];
	int N;
	cin >> N;

	//taking input
	for(int i = 0; i < N; i++) {
		for(int j = 0; j <N ; j++) {
			cin >> a[i][j];
		}
	}

    rotateimage(a,N);
    return 0;

}

// Sample Input
// N = 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// Sample Output
// 4 8 12 16 
// 3 7 11 15 
// 2 6 10 14 
// 1 5 9 13 