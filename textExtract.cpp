#include <iostream>
using namespace std;

int main () {
    char n[100];
    int a, b;
	cout<<"Please input a word: ";
	cin >> n;
	cout<< "Please input the starting index: ";
	cin >> a;
	cout << "Please input the ending index: ";
	cin >> b;
    if (cin.fail() || a<0 || b<0 || b<a){
    	cerr << "Error: Invalid input" << endl;
    	return -1;
    }
    cout<< "The extracted word is: ";
    for (int c=a; c<=b; c++){ 
        cout << n[c];}
    cout << endl;
    return 0;
}