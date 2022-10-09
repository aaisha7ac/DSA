//To rotate string by n numbers
#include<iostream>
#include<cstring>
using namespace std;

void rotate_string(char a[],int n) {

    int len = strlen(a);
    int i = len - 1;

    //to move character forward by n numbers
    while(i >= 0) {
        a[i+n] = a[i];
        i--;
    }

    int k = 0;
    int j = len;
    while(k < n) {
        a[k] = a[j];
        k++;
        j++;
    }
    
    a[len] = '\0';
    cout << a << endl;
}


int main( ) {
    int n;
    cin >> n;
    char a[1000];
    cin >> a;
    rotate_string(a,n);
    return 0;
}

// Input
// 3
// Aaisha

// Output
// shaAai