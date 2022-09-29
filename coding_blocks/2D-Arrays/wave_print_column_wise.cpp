#include<iostream>
using namespace std;
int main(){
	int a[10][10];
    int M,N;
    cin >> M;
    cin >> N;
    for( int r = 0; r<M; r++) {
        for( int c = 0; c<N; c++){
            cin>> a[r][c];
        }
    }
    for( int c = 0; c < N; c++) {
        if( c%2 == 0){
            for( int r = 0; r<M; r++){
                cout << a[r][c] <<","<<" ";
            }
        }
        else {
            for( int r = M - 1; r >= 0; r--) {
                cout<< a [r][c] <<","<<" ";
            }

        }
    }
	cout<<"END";
    
    return 0;


}