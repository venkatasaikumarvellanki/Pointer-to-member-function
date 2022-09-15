//create a class with name : employee, take input of employee no, name and employee salary
//using outside class defintion of class and print those values
#include<iostream>
using namespace std;
class employee
{
	int empno;
	char name;
	float salary;
    public:
    void getdata();
    void putdata();
};
void employee::getdata()
{
	cout<<"enter the employee no and name and salary=";
	cin>>empno>>name>>salary;
}
void employee::putdata()
{
	cout<<"\n employee no is="<<empno;
	cout<<"\n name is="<<name;
	cout<<"\n salary is="<<salary;
}
main()
{
	class employee obj;
	obj.getdata();
	obj.putdata();
	
}
