#include <iostream>
using namespace std;

int main () {
	int number;
	cout << "Enter an interger: ";
	cin >> number;
	bool a=cin.good();
	if (a) {
	   char next = cin.get ();
	   bool abc = (next ==' ') || (next == '\n');
	   if (abc) {cout << "The Interger that you have entered is " <<number <<endl;}
	   else {cerr << "Error: Invalid input. Not an interger" <<endl;}
	}
	else {cerr << "Error: Invalid input. Not a number" <<endl; }
return 0;
}