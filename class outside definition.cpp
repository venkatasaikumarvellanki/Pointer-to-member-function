//outside class definition
#include<iostream>
using namespace std;
class student
{
int rollno;
char name[45];
public:
void getdata();
void showdata();
};
//scope resolution operator ::
void student::getdata()
{
	cout<<"enter the rollno and name=";
	cin>>rollno>>name;
}
void student::showdata()
{
	cout<<"\n rollno is="<<rollno;
	cout<<"\n name is="<<name;
	
}
main()
{
	class student obj;
	obj.getdata();
	obj.showdata();
	
}
