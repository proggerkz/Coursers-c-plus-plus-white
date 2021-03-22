#include <iostream>
#include <string>
using namespace std;
class ReversibleString
{
	public:
		ReversibleString(){
			str = "";
		}
		ReversibleString(const string& new_str){
			str = new_str;
		}
		string ToString() const {
			return str;
		}
		void Reverse(){
			for(int i = 0; i < str.size() / 2; ++i)
				swap(str[i], str[str.size() - 1 - i]);
		}

	private:
		string str;	
};
int main() {
  ReversibleString s("live");
  s.Reverse();
  cout << s.ToString() << endl;
  
  s.Reverse();
  const ReversibleString& s_ref = s;
  string tmp = s_ref.ToString();
  cout << tmp << endl;
  
  ReversibleString empty;
  cout << '"' << empty.ToString() << '"' << endl;
  
  return 0;
}
