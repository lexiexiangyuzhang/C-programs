#include <iostream>
using namespace std;

int main() {
	int n ,b, h, x, y, z, m;
	cout << "Please enter an odd size of the base of the triangle: ";
	cin >> n;
	bool a=cin.good();
	if (a) {
		char next = cin.get ();
		bool yes = (next == ' ') || (next == '\n');
		if (yes) {
			bool odd = (n%2 ==1);
			if (odd) {
			    if (n > 0) {
	               h = (n/2)+1;
	               for (b=0;b<h;b++){
		                for (x=0;x<b;x++)
			            cout << " ";
                        m=n-2*b;
		                for (y=0;y<m;y++)
			            cout << "*";
		                for (z=0;z<b;z++)
			            cout << " ";
                        cout <<endl;
                    }    
                }
                else cerr <<"Error: Invalid input" <<endl;
	        }
	        else cerr <<"Error: Invalid input" <<endl;
        }
    }
    else cerr << "Error: Invalid input" <<endl;
return 0;
}