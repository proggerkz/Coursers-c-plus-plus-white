#include <iostream>
#include <vector>
#include <string>

using namespace std;

void MoveStrings(vector<string> &source, vector<string> &destination){
	for(int i = 0; i < source.size(); ++i){
		destination.push_back(source[i]);
	}
	source.clear();
}
int main(){
	int n;
	cin >> n;
	vector<string> source;
	vector<string> destination;
	for(int i = 0; i < n; ++i){
		string s;
		cin >> s;
		source.push_back(s);
	}
	int m;
	cin >> m;
	for(int i = 0; i < m; ++i){
		string s;
		cin >> s;
		destination.push_back(s);
	}
	MoveStrings(source, destination);
	source.clear();
	cout << source.size() << " ";
	for(string s : source)
		cout << s << ' ';
	cout << endl;

	cout << destination.size() << " ";
	for(string s : destination)
		cout << s << ' ';
	cout << endl;
	return 0;
}