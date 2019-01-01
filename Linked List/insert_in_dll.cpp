//Anas, Lets code!!

// PROGRAM TO INSERT A NODE IN A DOBLY LINKED LIST

#include <iostream>
#include<stdlib.h>
using namespace std;

class node{
 
 public: int data;
         node *next;
         node *prev ;

         node(int d){
         	next =NULL;
         	prev=NULL;
         	data = d;
         } 

};

//FUNCTION TO INSERT
node* insert(node *head , int d){

     if(head==NULL){
        head = new node(d); 
     }
     else{
     	node *temp = new node(d);
     	head->prev = temp ;
     	temp->next = head ;

     	head = temp ;
     }

    return head ;
}


 //FUNCTION TO DISPLAY THE DOUBLY LINKED LIST IN SIMPLE
 void display(node *head){

    if(head==NULL){
    	cout<<"\nDoubly Linked List is Empty\n" ;
    }
    else{
       node *temp = head ;
       
       while(temp != NULL){
       	 cout<<temp->data ;

       	 if(temp->next != NULL)
       	 	cout<<"<->" ;

       	 else
       	 	cout<<"->NULL";

       	 temp = temp->next ;
       } 

    }


 }


 //FUNCTION TO DISPLAY THE DOUBLY LINKED LIST REVERSE
  void display_reverse(node *head){

    if(head==NULL){
    	cout<<"\nDoubly Linked List is Empty\n" ;
    }
    else{
       node *temp = head ;

       //LOOP TO REACH THE LAST OF THE LINKED LIST
       while(temp->next != NULL){
       	 temp = temp->next ;
       }

       
       while(temp != NULL){
       	 cout<<temp->data ;

       	 if(temp->prev != NULL)
       	 	cout<<"<->" ;

       	 else
       	 	cout<<"->NULL";

       	 temp = temp->prev ;
       } 

    }


 } 


//FUNCTION TO REMOVE AN ELEMENT

 node* remove(node *head , int d){

 }




int main()
{
   int d ,ch ;
   node *head= NULL ;

  while(true){
 
  cout<<"\n1.Insert Data ";
  cout<<"\n2.Display Current Doubly Linked List" ;
  cout<<"\n3.Display Current Doubly Linked List in Reverse Order" ;
  cout<<"\n4.Delete a given node " ;
  cout<<"\n5.Exit " ;
  cout<<"\nEnter Your Choice : ";
  cin>>ch ;

	  switch(ch){

	  case 1:  cout<<"\nEnter the value : ";
	           cin>>d;
	           head=insert(head,d);
               break;

      case 2:  cout<<"\nCurrent Doubly Linked List : ";
               display(head);
               cout<<endl;
               break ;

      case 3: cout<<"\nCurrent Linked List in Reverse order : " ;
              display_reverse(head);
              cout<<endl ;
              break ;        

      case 4:  cout<<"\n Enter the Item to be Deleted : ";
               cin>>d ;

               //IF LINK LIST IS EMPTY
               if(head==NULL){
               	cout<<"\nLinked List is Already Empty\n";
               	break;
               }

              head=remove(head , d);

              if(head==NULL){
                cout<<"\nItem Deleted. Linked List is Empty Now.\n\n"	;
                break;
              }
              
              cout<<"\nCurrent Linked List : ";
              display(head); 
              cout<<endl ;
              break;

      case 5: exit(0);
               break ;        

      default : cout<<"Wrong Choice ." ;
                break ;                  
	 }        

}



return 0 ;	
}
// Don't Worry.. code will Run...!!!!!