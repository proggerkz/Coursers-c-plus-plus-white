#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	{
		int x = 5;
		{
			cout << x;
		}
		cout << x;
	}
	// cout << x;	

	return 0;	
}