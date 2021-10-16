// Full Implementation of Queue:

#include<iostream>
using namespace std;
int n=100;
int queue[100];
int front=-1;
int rear=-1;


// Function for Insert:
void insert(int val){
	if(rear==n-1){
		cout<<"***Queue Overflow***"<<"\n";
	}
	else{
		if(front==-1){
			front=0;
			rear++;
			queue[rear]=val;
			
		}
	}
	
}

// Function for Delete:

void deleted(){
	if(front==-1 or front>rear){
		cout<<"***Queue Underflow***"<<"\n";
	}
	else{
		cout<<"Deleted Element: "<<queue[front]<<"\n";
		front++;
	}
}

//Function to display:

void display(){
	if(front==-1){
		cout<<"***Queue Is Empty***"<<"\n";
	}
	else{
		cout<<"Queue Elements are : "<<"\n";
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<" "<<"\n";
		}
	}
} 




// *************Main***************

int main(void)
{
   int value;
   cout<<"****Full Queue Implementation****"<<"\n";
   cout<<"Menu Options Are: "<<"\n";
   cout<<"1.>Insert an Element"<<"\n";
   cout<<"2.>Delete an Element"<<"\n";
   cout<<"3.>Display the Queue"<<"\n";
   cout<<"4.>Exit"<<"\n";
   
   int ch;
   do{
   cout<<"Enter Choice: ";
   cin>>ch;
   	switch(ch){
   		case 1:{
   			cout<<"Enter Value to be Inserted: ";
			cin>>value;
   			insert(value);
			break;
		   }
		case 2:{
			deleted();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			cout<<"****Exit Successfully****"<<"\n";
			break;
		}   
	   }
   }while(ch!=4);	
}

