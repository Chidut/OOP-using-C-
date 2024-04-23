#include<iostream>
using namespace std;
int add(int a, int b);
int main()
{
	int a, b, sum;
	cout<< "Enter values of a and b";
	cin>>a>>b;
	sum = add(a, b);
	cout<< "Sum of a and b is ="<< sum<<endl;
	return 0;

}
int add(int a, int b)
{
// blah blah 
	return a+b;

}
