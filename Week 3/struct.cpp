#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Lecture
{
	string title;
	int duration;
	string author;
};
void PrintLecture(const Lecture& lecture){
	cout << lecture.title << " " << lecture.duration << ' ' << lecture.author << endl;
}
void PrintCourse(const vector<Lecture>& lectures){
	for(const Lecture& lecture : lectures){
		PrintLecture(lecture);
	}
}
int main(){

	return 0;
}