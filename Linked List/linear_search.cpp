//Anas, Lets code!!

//PROGRAM TO IMPLEMENT LINEAR SEARCH ON LINKED LIST 

#include <iostream>
#include<stdlib.h>
using namespace std;

class node {

 public :  int data ;
           node *next ;

	 node(int d){

	 	data = d ;
	 	next = NULL ;
	 }

};

//FUNCTION TO SEARCH A NODE AND RETURN ITS POSITION
 int search(node *head , int d){

   if(head == NULL){
   	return -1;    // LINKED LIST IS EMPTY
   }

   else{
   	node *temp = head ;
   	int index=1;

   	while(temp!=NULL){

      if(temp->data == d){
        return index;
      }
      
      index++;
      temp=temp->next ;
   	}
   
   return -2 ;   //ITEM IS NOT IN LINKED LIST
 
  }

}



// 	FUNCTION TO INSERT IN LINKED LIST	
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



// FUNCTION TO DISPLAY LINKED LIST
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
  int d ,ch , item ,pos;
  node *head= NULL ;

while(true){
 
  cout<<"\n\n1.Insert Data ";
  cout<<"\n2.Display Current Linked List" ;
  cout<<"\n3.Search An Item " ;
  cout<<"\n4.Exit " ;
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

      case 3:  cout<<"\nEnter the Item to be Searched : ";
               cin>>item ;
               pos = search(head,item) ;

               if(pos==-1){
               	 cout<<"\nLinked List is Empty\n" ;
               }
               else if(pos==-2){
               	cout<<"\nItem not Found\n" ;
               }
               else{
               	cout<<"\nThe Item "<<item<<" is at position "<<pos ;
               }
               break ;
              

      case 4: exit(0);
               break ;        

      default : cout<<"Wrong Choice ." ;
                break ;                  
	 }        

}

return 0 ;	
}
// Don't Worry.. code will Run...!!!!!