//call by referrence
//swap two numbers
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"x after swapping= "<<x<<endl;
	cout<<"y after swapping= "<<y<<endl;
}
main()
{
	int a,b;
	cout<<"enter two numbers= ";
	cin>>a>>b;
	cout<<"a before swapping= "<<a<<endl;
	cout<<"b before swapping= "<<b<<endl;
	swap(a,b);
}
