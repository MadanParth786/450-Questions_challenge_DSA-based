//Question: Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. 
//          If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

//Solution: Code: 

#include<iostream>
using namespace std;

struct date{
	int day;
	int month;
	int year;
};
struct date d[2];

int main(void){
	for(int i=1;i<=2;i++){
		cout<<"Enter Date"<<i<<"\n";
		cout<<"Day:";
		cin>>d[i].day;
		cout<<"Month:";
		cin>>d[i].month;
		cout<<"Year:";
		cin>>d[i].year;
	}
	
	
	for(int i=1;i<=2;i++){
		if((d[i].day==d[i+1].day) and (d[i].month==d[i+1].month) and (d[i].year==d[i+1].year)){
			cout<<"Dates are Equal"<<"\n";
		}
    }
}
