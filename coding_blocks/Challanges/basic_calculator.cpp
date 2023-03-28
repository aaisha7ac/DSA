// Write a program that works as a simple calculator.

// 1.It reads a character (ch)
// 2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then performs appropriate appropriate operation between numbers and print the number.
// 3.If ch is 'X' or 'x', the program terminates.
// 4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).
#include<iostream>
using namespace std;
int main() {
    char ch;
	int a, b;
	do{
		cin >> ch;
		if(ch == '+') {
			cin >> a >> b;
			cout << a + b << endl;

		}
		else if(ch == '-') {
			cin >> a >> b;
			cout << a - b << endl;

		}
		else if(ch == '*') {
			cin >> a >> b;
			cout << a * b << endl;

		}
		else if(ch == '%') {
			cin >> a >> b;
			cout << a % b << endl;

		}
		else if(ch == '/') {
			cin >> a >> b;
			cout << a / b << endl;

		}
		else if(ch == 'X' || ch =='x') {
			break;
		}
		else{
			cout <<"Invalid operation. Try again." << endl;
		}
		
		
	}
	while(1);
	
	return 0;
}

// Sample Input
// * 
// 1 
// 2 
// / 
// 4 
// 2 
// + 
// 3 
// 2 
// ; 
// X

// Sample Output
// 2 
// 2 
// 5 
// Invalid operation. Try again.

// Explanation
// Maybe use a do-while.
