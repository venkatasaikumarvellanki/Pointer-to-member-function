#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string s1="rat hat mat cat vat";
	int a=s1.find("cat");
	cout<<a<<endl;
	s1.insert(12," cat ");
	cout<<s1;
}
