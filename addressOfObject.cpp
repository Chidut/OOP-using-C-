/* 
Write a C/C++ Prog to print the address of an object.
*/

#include<iostream>
using namespace std;
class A
{
	public:
	void printAddress(int i)
	{
		cout<<"The adress of an object a"<<i<<" is "<<this<<endl; 
	}
};
int main()
{
	//declare an object 
	A a1, *ptr;
	
	// calling the data members 
	
	ptr = &a1;
	// first way
	cout<<"The adress of an object a1 is "<<ptr<<endl; 
	//second way
	cout<<"The adress of an object a1 is "<<&a1<<endl; 
	//third way
	int i = 1;
	a1.printAddress(i);
	
	A a2;
	a2.printAddress(i+1);
	
	return 0;
}

