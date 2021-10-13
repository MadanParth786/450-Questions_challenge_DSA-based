//Structure Revision (using Pointers)
//1.using Arrow operator
#include<iostream>
using namespace std;

struct Student{
	char name[20];
	int r_no;
	int marks;
	
};
struct Student stu1,stu2;
struct Student *s1,*s2;  //Pointer Use.
int main(void)
{
	    s1=&stu1;  
	    s2=&stu2;
	    cout<<"Enter detail of 1st Student: "<<"\n";
	    
	    
		cin>>s1->name;
	    cin>>s1->r_no;
		cin>>s1->marks;
		cout<<"Enter detail of 2nd Student: "<<"\n";
	    
		
		cin>>s2->name;
		cin>>s2->r_no;
		cin>>s2->marks;
		
        cout<<"display detail of 1st Student: "<<"\n";
	    
		
		cout<<s1->name<<"\n";
		cout<<s1->r_no<<"\t"<<s1->marks<<"\n";
		
		cout<<"display detail of 2nd Student: "<<"\n";
	    cout<<s2->name<<"\n";
		cout<<s2->r_no<<"\t"<<s2->marks<<"\n";
	
	
	
}
  
