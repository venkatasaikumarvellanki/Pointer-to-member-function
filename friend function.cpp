//friend function
//sum of two numbers
#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
    friend void add(A obj);
    
};
void add(A obj)
{
	obj.a=10;
	obj.b=20;
	cout<<"sum is="<<obj.a+obj.b;
}
main()
{
	class A obj;
	add(obj);
	
}
