//Consider that given array in sorted row and column wise

#include<iostream>
using namespace std;

void staircase_search(int a[][100],int N,int M,int key) {
    int sr = 0; 
    int ec = M - 1;
    bool iskeypresent = false;
    while(sr < N && ec >= 0) {

        if(a[sr][ec] == key) {
            cout << "key is found at index:"<<" " << sr <<"," << ec <<endl;
            iskeypresent = true;
            break;
        }

        else if(a[sr][ec] < key) {
            sr++;
        }

        else {//a[sr][ec] > key
            ec--;
          
        }
    }

    if(iskeypresent = false) {
        cout << "key is not present" << endl;
    }
}

int main( ) {

    int a[100][100];
    int N,M,key;

    cout << "Enter the value of N and M:" <<endl;
    cin >> N;
    cin >> M;

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < M; col++) {
            cin >> a[row][col];
        }
    }

    cout << "Enter the value of key" << endl;
    cin >> key;

    staircase_search(a,N,M,key);
    return 0;

}

// For example:
// 4 4

// 1 2 4 5
// 7 8 10 12 
// 9 15 16 19
// 20 21 24 26

// key = 24

// O/p = key found at index 3,2