#include <iostream>
using namespace std;

int main () {
	unsigned int a;
	cout << "Enter a number: ";
	cin >> a;
	bool interger=cin.good();
	if (interger) {
		char next=cin.get();
		bool number = (next == ' ') || (next == '\n');
		if (number) {
			if (a ==0)
				cout << "Its factorial is 1." <<endl;
			else if (a >0 && a<= 20) {
				int factorial = 1;
			    for (int i = 1; i <= a; i++)
		        factorial *= i;
		        cout << "Its factorial is " << factorial <<"!";}
		    else cerr << "Error: invalid Input. Program Terminated." <<endl;}
        else cerr << "Error: invalid Input. Program Terminated." <<endl;}
    else cerr << "Error: invalid Input. Program Terminated." <<endl;
return 0;
}


			