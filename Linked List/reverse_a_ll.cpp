//Anas, Lets code!!

//PROGRAM TO REVERSE A LINKED LIST BY CHANGING THE POINTER

#include <iostream>
#include<stdlib.h>
using namespace std;

class node{

	public : int data ;
	         node *next;
            
            //CONSTRUCTOR
	         node(int d){
	         	data = d;
	         	next =NULL;
	         }

	         node(){
	         	data = 0;
	         	next = NULL;
	         }
};

//FUNCTION TO INSERT A NODE
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



//FUNCTION TO REVERSE A LINKED LIST

node* reverse_ll(node *head){
     
      if(head==NULL){
      	cout<<"\nEmpty Linked List\n";
      	return head ;
      }
      else if(head->next == NULL){
      	return head;
      }
      else{
	     node *prev = head ;
	     node *cur = head->next ;
	     node *front = head->next->next ;

	     head->next = NULL;

	      while(cur != NULL){
	       cur->next = prev ;
	       prev = cur;
	       cur = front ;
	       
	       if(front != NULL){
	         front = front->next ;
	        }
         }

         head = prev ;
      
      }     
          
    
      return head ;
}


//FUNCTION TO DISPLAY
void display(node *head){
   
   node *temp = head ;

   while(true){

     if(temp != NULL){
     	cout<<temp->data ;

     	if(temp->next != NULL){
     		cout<<"->" ;
     	}
     	else{
     		cout<<"->NULL";
     	}

     	temp = temp->next ;
     }
     else{
     	break ;
     }

   }

}



//MAIN FUNCTION
int main()
{
	node *head = NULL ;

cout<<"\nEnter the Linked List.\n";
while(true){
  
   char ch ;
   int d ;
   cout<<"Enter the Data : " ;
   cin>>d ;
   head = insert(head , d);
   cout<<"Want to exit(y/n)";
   cin>>ch ;

   if(ch=='y')
    break;  

}

cout<<"\nLinked list : " ;
display(head);

head = reverse_ll(head);           //FUNCTION TO REVERSE THE LINKED LIST

cout<<"\nLinked List after Reverse : ";
display(head);


return 0 ;	
}
// Don't Worry.. code will Run...!!!!!