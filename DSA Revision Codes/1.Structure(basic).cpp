//Structure Revision (Basic)
//1.using dot operator
#include<iostream>
using namespace std;

struct Student{
	char name[20];
	int r_no;
	int marks;
	
};
struct Student stu1,stu2;
int main(void)
{
	    cout<<"Enter detail of 1st Student: "<<"\n";
	    
	    
		cin>>stu1.name;
	    cin>>stu1.r_no;
		cin>>stu1.marks;
		cout<<"Enter detail of 2nd Student: "<<"\n";
	    
		
		cin>>stu2.name;
		cin>>stu2.r_no;
		cin>>stu2.marks;
		
        cout<<"display detail of 1st Student: "<<"\n";
	    
		
		cout<<stu1.name<<"\n";
		cout<<stu1.r_no<<"\t"<<stu1.marks<<"\n";
		
		cout<<"display detail of 2nd Student: "<<"\n";
	    cout<<stu2.name<<"\n";
		cout<<stu2.r_no<<"\t"<<stu2.marks<<"\n";
	
	
	
}
  
