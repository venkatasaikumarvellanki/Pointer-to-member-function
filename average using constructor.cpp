#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[21];
	int t,h,e;
	public:
		student()
		{
			cout<<"enter rollno and name=";
			cin>>rollno>>name;
			cout<<"enter telugu, hindi and english marks=";
			cin>>t>>h>>e;
			
		}
		void average()
		{
			float avg;
			avg=(t+h+e)/3;
			cout<<"average is="<<avg;
		}
};
main()
{
	class student obj;
	obj.average();
}



