//To revise the quadratic equations

#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c,d;
	cin >> a >> b >> c;
	d = (b*b) - (4*a*c);
	int root1 = (-b-sqrt((b*b)-(4*a*c))) / (2*a);
  	int root2 = (-b+sqrt((b*b)-(4*a*c))) / (2*a);
	if(d > 0) {
		cout << "Real and Distinct" << endl;
		if(root1 < root2) {
			cout << root1 << " " << root2;

		}
		else{
			cout << root2 << " " << root1;

		}
		
	}
	else if(d == 0) {
		cout << "Real and Equal" << endl;
		cout << root1 << " " << root2;
	}
	else{
		cout << "Imaginary" << endl;
	}
	return 0;
}


// Sample Input
// 1 -11 28

// Sample Output
// Real and Distinct
// 4 7

// Explanation
// The input corresponds to equation ax^2 + bx + c = 0. Roots = (-b + sqrt(b^2 - 4ac))/2a , (-b - sqrt(b^2 - 4ac))/2a