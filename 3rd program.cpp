#include<iostream>
using namespace std;

int main()
{
	int val=100;
	int*ptr=&val;
	int**d_ptr=&ptr;
	
	cout<<"Address of val:"<<&val<<ptr<<*d_ptr<<endl;
	cout<<"Value of val:"<<val<<*ptr<<**d_ptr<<endl;
}
