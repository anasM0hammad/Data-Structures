//Anas, Lets code!!

#include <iostream>
#include<stdlib.h>
using namespace std;

class node{

   public :  int data ;
             node *next;

             node(int d){
             	next=NULL;
             	data=d ;
             }

};


//INSERT IN LINKED LIST FUNCTION
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


//FUNCTION TO DELETE A NODE FROM START
node* remove(node *head){
    
    node *temp = head ;
   
    if(head==NULL){
    	return NULL ;
    }

    else{

    	head = head->next ;
    	delete temp ;
    }

   return head ;
} 




//FUNCTION TO DISPLAY LINKED LIST
void display(node *head){
   
   node *temp = head ;

   while(true){

     if(temp != NULL){
     	cout<<temp->data ;

     	if(temp->next != NULL){
     		cout<<"<-" ;
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
  cout<<"\n3.Delete Node from Start " ;
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

      case 3:  //IF LINK LIST IS EMPTY
               if(head==NULL){
               	cout<<"Linked List is Already Empty";
               	break;
               }


              cout<<"\nDeleted Item is : "<<head->data;
              head=remove(head);

	              if(head==NULL){
	                cout<<"\nItem Deleted. Linked List is Empty Now.\n"	;
	                break;
	              }

              cout<<"\nDelete Successful"<<endl ;
              display(head); 
              break;

      case 4: exit(0);
               break ;        

      default : cout<<"Wrong Choice ." ;
                break ;                  
	 }        

}

return 0 ;	
}
// Don't Worry.. code will Run...!!!!!