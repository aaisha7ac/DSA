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
    for( int r = 0; r < M; r++) {
        if( r%2 == 0){
            for( int c = 0; c<N; c++){
                cout << a[r][c] <<","<<" ";
            }
        }
        else {
            for( int c = N - 1; c >= 0; c--) {
                cout<< a [r][c] <<","<<" ";
            }

        }
    }
	cout<<"END";
    
    return 0;


}