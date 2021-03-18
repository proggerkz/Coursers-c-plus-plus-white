#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

void PrintMap(const map<string, int>& m){
	cout << "Size = " << m.size() << endl;
	for (const auto& item : m){
		cout << item.first << " " << item.second << endl;
	}
}
int main(){
	vector<string> words = {"one", "two", "one"};
	map<string, int> counters;
	for (const string& word : words){
		++counters[word];
	}
	PrintMap(counters);
	return 0;
}