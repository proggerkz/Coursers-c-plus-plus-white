#include <iostream>
using namespace std;

int main() {
	double N, A, B, X, Y;
	cin >> N >> A >> B >> X >> Y;
	double F = N * X / 100;
	double S = N * Y / 100;
	if(N > B)
		N -= S;
	else if(N > A)
		N -= F;
	cout << N;
    return 0;
}	