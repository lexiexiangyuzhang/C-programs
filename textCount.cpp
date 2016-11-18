#include <iostream>
using namespace std;

int main () {
	char text[100];
    int i=0;
    cout <<"Engter text without whitespace: ";
    cin >> text;
    if (cin.fail()){
    	cerr << "Error";
    	return -1;
    }
    for (int a=0; text[a]!=0; a++)
        i=i+1;
    cout << i <<endl;
    return 0;
}