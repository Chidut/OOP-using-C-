// write a c++ program to simulate arithmetic operations
// concept: user-defined function and switch statement inside main()
#include<iostream>
using namespace std;
// function prototyping
int add();
int sub();
int mul();
int divi();

int main()
{
	char ch;
	float result;
	cout<<"Enter your choice\n";
	cin>>ch;
	switch(ch)
	{
		case '+': result = add();
		cout<<"The sum is :" <<result<<endl;
		break;	
		
		case '-': result = sub();
		cout<<"The subtraction is :" <<result<<endl;
		break;
		
		case '*': result = mul();
		cout<<"The multiplication is :" <<result<<endl;
		break;
		
		case '/': result = divi();
		cout<<"The division result is :" <<result<<endl;
		break;
		
		default:
		break;
	}
	return 0;
}
int add()
{
	int a, b;
	cout<<"Enter the two values"<<endl;
	cin>>a;
	cin>>b;
	return a+b;	
}
int sub()
{
	int a, b;
	cout<<"Enter the two values"<<endl;
	cin>>a;
	cin>>b;
	return a-b;
}
int mul()
{
	int a, b;
	cout<<"Enter the two values"<<endl;
	cin>>a;
	cin>>b;
	return a*b;
}
int divi()
{
	int a, b;
	cout<<"Enter the two values"<<endl;
	cin>>a;
	cin>>b;
	return a/b;
}
