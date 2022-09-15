#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[21];
    public:
    void getdata();
    void putdata();
};
void student::getdata()
{
	cout<<"enter the rollno and name=";
	cin>>rollno>>name;
}
void student::putdata()
{
	cout<<"\n roll no is="<<rollno;
	cout<<"\n name is="<<name;
}
main()
{
	class student obj;
	obj.getdata();
	obj.putdata();
	
}
