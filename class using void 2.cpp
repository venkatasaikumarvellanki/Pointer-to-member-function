#include<iostream>
using namespace std;
class car
{
int carno;
float price;
char name[45];
public:
void getdata()
{
	cout<<"enter the carno and name and price=";
	cin>>carno>>name>>price;
}
void showdata()
{
	cout<<"\n carno is="<<carno;
	cout<<"\n name is="<<name;
	cout<<"\n price is="<<price;
	
}
};
main()
{
	class car obj;
	obj.getdata();
	obj.showdata();
	
}
