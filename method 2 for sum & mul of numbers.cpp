//sum of two numbers & multiplication of two numbers
#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
};
int mul(int a,int b)
  {
  	int f;
  	f=a*b;
  	return f;
  }
main()
{
	int a,b,s,f;
	cin>>a>>b;        
	s=add(a,b);       //fn calling    //add(a,b)
	cout<<s<<endl;  
	cin>>a>>b;
	f=mul(a,b);         //mul(a,b)
	cout<<f;
}
