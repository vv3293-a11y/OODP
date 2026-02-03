#include <iostream>
using namespace std;
class student{
	public:
		static int totalstudent;
};
 
 int Student::totalStudents = 0;
 
 int main(){
 	student s1, s2;
 	Student::totalStudents++;
 	Student::totalStudents++;
 	cout << "Total Students:" << Student::totalStudents << endl;
 	return 0;
 }
