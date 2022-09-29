#include<iostream>
using namespace std;
void spiral_print(int a[][10], int M, int N) {
    int sr = 0;
	int er = M-1;
	int sc = 0;
	int ec = N-1;
	

	while(sr <= er and sc <= ec) {

		for(int col = sc; col <= ec; col++) {
			cout << a[sr][col] << "," << " ";

		}
		sr++;

		for(int row = sr; row <= er; row++) {
			cout <<a[row][ec] << "," << " ";

		}

		ec--;

		if(sr<er){
				for(int col = ec; col >= sc; col--) {
					cout <<a[er][col] <<"," << " ";
			}
			er--;

		}

		if(sc<ec) {
				for(int row = er; row>=sr; row--) {
					cout << a[row][sc] << "," << " ";
				}

				sc++;
		}


	}

	cout << "END";

}


int main( ) {
	int a[10][10];
	int M,N;
	cin >> M;
	cin >> N;

	for(int r = 0; r < M; r++) {
		for(int c = 0; c < N; c++) {
			cin >> a[r][c];
			
		}
	}

	spiral_print(a,M,N);

	return 0;
}
