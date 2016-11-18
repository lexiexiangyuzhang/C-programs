#include <iostream>
#include <climits>
using namespace std;

int main () {
	int a, b;
	cout << "Enter two integers to add: ";
	cin >> a >>b;
	bool interger=cin.good();
	if (interger) {
		char next=cin.get();
		bool number = (next == ' ') || (next == '\n');
		if (number) {
			int c = a +b ;
			bool result = (c > b && c > a)||(c <a && c<b);
		    if (result) {cerr << "Error: summed value out of the signed int range." <<endl;}
            else {cout << "Sum of two numbers is: " <<c <<endl; }
        }
        else {cerr << "Error: In valid input. Non-integer detected." << endl;}
}
        else {cerr << "Error: In valid input. Non-integer detected." << endl;}
return 0;
}
