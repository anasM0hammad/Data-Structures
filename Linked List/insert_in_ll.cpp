//Anas, Lets code!!

#include <iostream>
#include<stdlib.h>
using namespace std;

class node {

public: node(int d){
    
    data = d ;
    next = NULL ;
  
  }

   node *next;
   int data ;

};

node* insert(node *head , int d){

    if(head==NULL){
      
      head = new node(d);

    }

    else{
        
        node *temp = new node(d) ;
        temp->next = head ;
        head = temp ;
    }

    return head ;

}


void display(node *head){
   
   node *temp = head ;

   while(true){

     if(temp != NULL){
     	cout<<temp->data ;

     	if(temp->next != NULL){
     		cout<<"->" ;
     	}

     	temp = temp->next ;
     }
     else{
     	break ;
     }

   }


}


int main()
{
  int d ,ch ;
  node *head= NULL ;

while(true){
 
  cout<<"\n1.Insert Data ";
  cout<<"\n2.Display Current Linked List" ;
  cout<<"\n3.Exit " ;
  cout<<"\nEnter Your Choice : ";
  cin>>ch ;

	  switch(ch){

	  case 1:  cout<<"\nEnter the value : ";
	           cin>>d;
	           head=insert(head,d);
               break;

      case 2:  cout<<"\nCurrent Linked List : ";
               display(head);
               cout<<endl;
               break ;

       case 3: exit(0);
               break ;        

      default : cout<<"Wrong Choice ." ;
                break ;                  
	 }        

}

return 0 ;	
}
// Don't Worry.. code will Run...!!!!!