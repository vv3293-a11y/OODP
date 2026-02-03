#include <iostream>
using namespace std;

class Student{
	public:
		int rollno;
};
int main()
{
	
	Student s1, s2;
	s1.rollno = 101;
	s2.rollno = 102;
	cout << Student 1 Roll No << s1.rollno << endl;
	cout << Student 2 Roll No << s2.rollno << endl;
	return 0;
}
