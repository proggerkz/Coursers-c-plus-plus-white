#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Person {
public:
  Person(const string& new_first_name, const string& new_last_name,
    const int& new_year){
    first_name = new_first_name;
    last_name = new_last_name;
    year = new_year;
    first_name_year[year] = first_name;
    last_name_year[year] = last_name;
  } 
  void ChangeFirstName(const int& new_year, const string& new_first_name) {
    if(new_year >=   year){
      year = new_year;
      first_name = new_first_name;
      first_name_year[year] = first_name;
    }
  }
  void ChangeLastName (const int& new_year, const string& new_last_name) {
    if(new_year >= year){
      year = new_year;
      last_name = new_last_name;
      last_name_year[year] = last_name;
    }
  }
  string GetFullName(const int& new_year) const {
  	string cur_first_name = "", cur_last_name = "";
  	for(const auto& item : first_name_year){
  		if(item.first <= new_year){
  			cur_first_name = item.second;
  		}
  	}
  	for(const auto& item : last_name_year){
  		if(item.first <= new_year){
  			cur_last_name = item.second;
  		}
  	}
    if(cur_first_name == ""){
      return "No person";
    }else{
      return cur_first_name + " " + cur_last_name;
    }
  }
  string GetConverted(const vector<string>& v) const{
  	string s = v[v.size() - 1];
  	string res;
  	for(int i = v.size() - 2; i >= 0; --i){
		if(v[i] != v[i + 1]){
			if(res.empty())
				res = v[i];
			else 
				res += ", " + v[i];
		}
	}
	return s + (res.empty() ? "" : " (" + res + ")");
  }
  string GetFullNameWithHistory(const int& new_year)  const {
  	vector<string> first_names, last_names;
  	for(const auto& item : first_name_year){
  		if(item.first <= new_year){
  			first_names.push_back(item.second);
  		}
  	}
  	for(const auto& item : last_name_year){
  		if(item.first <= new_year){
  			last_names.push_back(item.second);
  		}
  	}

  	if(!first_names.empty() and !last_names.empty()){
  			return GetConverted(first_names) + " " + GetConverted(last_names);
    }else {
      return "No person";
    }
  }
private:
  string first_name;
  string last_name;
  int year;
	map<int, string> first_name_year, last_name_year;
};
int main() {
  Person person("Polina", "Sergeeva", 1960);
  for (int year : {1959, 1960}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
    
  person.ChangeFirstName(1965, "Appolinaria");
  person.ChangeLastName(1967, "Ivanova");
  for (int year : {1965, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  return 0;
}
