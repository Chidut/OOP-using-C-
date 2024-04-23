#include<iostream>
using namespace std;
class A
{
	private:
	int x = 100;
	public:
	void method1()
	{
	
		cout<<"Displaying the member x here "<<x<<endl;
	}
	// its a constructor , a special function
	// same name as class 
	// no return type 
	// it can take parameters
	A() // zero-argument constructor
	{
		cout<<"Displaying the member x here via A() "<<x<<endl;
	} 
	
};
int main()
{
	A ob1; // 
	
	ob1.method1();
	
	A ob2;
	A ob3;
}
