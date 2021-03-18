
#include <iostream>
#include <set>
using namespace std;

void PrintSet(const set<string> &s){
	cout << "Size = " << s.size() << endl;
	for (auto x : s){
		cout << x << endl;
	}
}
int main(){
	// map<string, bool> is_famous_person;
	// is_famous_person["Stroustrup"] = true;
	// is_famous_person["Ritchie"] = true;
	set<string> famous_people;
	famous_people.insert("Stroustrup");
	famous_people.insert("Ritchie");
	famous_people.insert("Stroustrup");
	PrintSet(famous_people);
    return 0;
}