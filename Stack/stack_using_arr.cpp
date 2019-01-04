//Anas, Lets code!!

#include <iostream>
#include<stdlib.h>
using namespace std;

//GLOBAL ARRAY FOR STACK
int stack[100] , top = -1 ;


//FUNCTION TO PUSH DATA INTO STACK
void push(int d){
 
 top++;
 stack[top]=d ;
 
 return ;
}

//FUNCTION TO POP FROM STACK 

void pop(){
	top--;
}



int main()
{

   int ch , data ;

   while(true){

       cout<<"\n1.Push in the Stack";
	   cout<<"\n2.Pop from the Stack" ;
	   cout<<"\n3.Display Current Stack";
	   cout<<"\n4.Exit";
	   cout<<"\nEnter your Choice : ";
	   cin>>ch ;
        

       switch(ch){

         case 1: cout<<"\n\nEnter the data : ";
                 cin>>data ;
                 push(data);
                 break ;

         case 2: cout<<"\n\nElement to be pop : ";
                 if(top > -1){
                 	cout<<stack[top];
                 	pop();
                 }
                 else{
                 	cout<<"Stack is Empty" ;
                 }
                break ;

          case 3: cout<<"\nCurrent stack is : \n" ;
                  for(int i=top ; i>=0 ; i--)
                   cout<<stack[i]<<endl ;      
                  
                  break ;

           case 4: exit(0);  
                   break ;

           default : cout<<"\nWrong Choice\n" ;
                    break ;               

       } 


   }


return 0 ;	
}
// Don't Worry.. code will Run...!!!!!