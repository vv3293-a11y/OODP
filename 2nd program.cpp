#include<iostream>
using namespace std;

int main()
{
	int var = 50;
	int*ptr= &var;
	
	cout<<var<<endl; //50
	cout<<*ptr<<endl; //50
	return 0;
}
