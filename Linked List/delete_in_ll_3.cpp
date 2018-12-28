//Anas, Lets code!!

//DELETE A GIVEN NODE FROM THE LINKED LIST


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


//FUNCTION TO DELETE A NODE FROM END
node* remove(node *head , int d){
 
      int flag=0;    //INITIALLY GIVEN NODE IS NOT FOUND IN LL
      node *onNode = head->next ;
      node *beforeNode = head ;

     
        if(beforeNode->data == d){
          flag=1;
          delete beforeNode;
          head= onNode;
        }

      else{

        while(onNode != NULL){

          if(onNode->data == d){
          
          	flag=1;    // NODE FOUND
            beforeNode->next = onNode->next ;
            delete onNode;

          }
        
            onNode = onNode->next;
            beforeNode = beforeNode->next ;
            

        }

    }

     if(flag){
      cout<<"\nItem Deleted\n" ;
     }
     else{
      cout<<"\nItem not Found\n";
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
  cout<<"\n3.Delete a given node " ;
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

      case 3:  cout<<"\n Enter the Item to be Deleted : ";
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

      case 4: exit(0);
               break ;        

      default : cout<<"Wrong Choice ." ;
                break ;                  
	 }        

}

return 0 ;	
}

// Don't Worry.. code will Run...!!!!!