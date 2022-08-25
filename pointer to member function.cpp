//pointer to member function
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rollno;
	char name[38];
	public:
		void getdata(int x,char y[])
		{
			rollno=x;
			strcpy(name,y);
		}
		void putdata()
		{
			cout<<"rollno is="<<rollno<<endl;
			cout<<"name is="<<name<<endl;
			
		}
};
main()
{
	class student obj,*p;
	p=&obj;
	
	void (student::*ptr)(int,char[])= &student::getdata;
	
	(obj.*ptr)(18,"vk");
	obj.putdata();
	
	(p->*ptr)(7,"msd");
	p->putdata();
}
