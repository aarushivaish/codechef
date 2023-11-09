#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin >> T;
	while(T--)
	{
	    cin >> X >> Y;
	    int n=X/Y;
	    if(n>20)
	    cout << "20\n";
	    else
	    cout << n << endl;
	}
	return 0;
}
