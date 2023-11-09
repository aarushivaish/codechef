#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin >> T;
	while(T--)
	{
	    cin >> X >> Y;
	    if(X<Y)
	    cout << "repair\n";
	    else if(X>Y)
	    cout << "new phone\n";
	    else 
	    cout << "any\n";
	}
	return 0;
}
