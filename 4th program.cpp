#include <iostream>
using namespace std;

int main()
{
	
	int val = 10;
	int *ptr = &val;
	cout << ptr <<endl;
	ptr++;
	ptr = ptr- 2;
	return 0;
}
