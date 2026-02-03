#include <iostream>
using namespace std;
int main()
{
	int a[3] = {10, 20, 30};
	int *p = a;
	cout << *p << endl;	//10
	cout << *(p+1) << endl; //20
	return 0;
}
