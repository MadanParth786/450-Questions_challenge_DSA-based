// Question: Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., 
//           name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.

//Solution: Code:

#include<iostream>
using namespace std;

struct Marks{
	char name[20];
	int r_no;
	int c_marks;
	int m_marks;
	int p_marks;
	
};
struct Marks stu[5];


int main(void)
{
	for(int i=1;i<=5;i++){
		cout<<"Student"<<i<<"\n";
		cout<<"Name: ";
		cin>>stu[i].name;
		cout<<"Roll_no: ";
		cin>>stu[i].r_no;
		cout<<"Chemistry Marks: ";
		cin>>stu[i].c_marks;
		cout<<"Maths Marks: ";
		cin>>stu[i].m_marks;
		cout<<"Physics Marks: ";
		cin>>stu[i].p_marks;
	}
	
	// Display the percentage Of students.
	for(int i=1;i<=5;i++){
		cout<<"Percentage of Student: "<<i<<(stu[i].c_marks+stu[i].m_marks+stu[i].p_marks)/3<<"%"<<"\n";
		
		}
}
