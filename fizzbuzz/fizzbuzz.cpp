// WELCOME MOHAMMAD ANAS
// PROBLEM IS TO TAKE A NUMBER N AS USER INPUT AND PRINT 1 TO N .
// ON THE PLACE OF MULTIPLE OF THREE PRINT 'FIZZ'
// ON THE PLACE OF MULTIPLE OF FIVE PRINT 'BUZZ'
// PRINT 'FIZZBUZZ' IF BOTH 

#include<iostream>
 
using namespace std ;
 
void fizzbuzz(int n){
  
  for(int i=1 ; i<= n ; i++){

      if(i%3 == 0 && i%5 == 0)
       cout<<"FIZZBUZZ"<<endl ;

      else if(i%5 == 0)
       cout<<"BUZZ"<<endl ;

      else if(i%3 == 0)
       cout<<"FIZZ"<<endl ;

      else
       cout<<i<<endl ;   
  }
}

int main(){

int n ;
cin>>n ;

fizzbuzz(n) ;
 
return 0 ;
}