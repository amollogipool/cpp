#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	public:
	int rno;
	//float per;
	char name[20];
	void getdata()
	{
		cout<<"Enter RollNo :- \t";
		cin>>rno;
		cout<<"Enter Name :- \t";
		cin>>name;
		
	}
	
};
class marks : public student
{
public:
	int m1,m2,m3,tot;
	float per;
	void getmarks()
	{
		getdata();
		cout<<"Enter Marks 1 :- \t";
		cin>>m1;
		cout<<"Enter Marks 2 :- \t";
		cin>>m2;
		cout<<"Enter Marks 2 :- \t";
		cin>>m3;
                              tot=m1+m2+m3;
                              per=tot/3;
	}
	void display()
	{
		
		cout<<"Roll Not \t Name \t Marks1 \t marks2 \t Marks3 \t Total \t Percentage";
		cout<<rno<<"\t"<<name<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<tot<<"\t"<<per;
	}
};
int main()
{
	marks m;
	m.getmarks();
	m.display();
	return 0;
}
