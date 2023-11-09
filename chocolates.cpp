#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y,Z;
	cin >> T;
	while(T--)
	{
	    cin >> X >> Y >> Z;
	    int max=((5*X)+(10*Y))/Z;
	    cout << max << endl;
	}
	return 0;
}
