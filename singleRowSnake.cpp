#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Wall-to-wall dimension: ";
	cin >> a;
	cout << "Snake length: ";
	cin >> b;
	cout<< "Wall-to-snake tail distance:";
	cin >> c;
	bool x=cin.good();
	if (x) {
		char next = cin.get ();
		bool yes = (next == ' ') || (next == '\n');
		if (yes) {
			bool longenough = (a-2>=b+c)&&(b>=0) && (c>=0);
			if (longenough) {
			    cout << "|";
			    bool space = (c>=0);
			    if (space) {
			    	for (int q=0;q<c;q++)
		        	cout << " ";
			    }
			    bool snake = (b>=0);
			    if (snake) {		        
		        for (int w=1;w<b;w++)
		        	cout << "*";
		        bool head = (b>0);
		        if (head) cout << "O"; }
		        for (int e=0;e<a-b-c-2;e++)
		        	cout << " ";
		        cout << "|" <<endl;
		    }
		    else cerr << "Error";
		}
		else cerr << "Error";
    }
    else cerr << "Error";
return 0;
}


