// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

bool checkPrime(int num){

    for(int i=2 ; i*i<=num ; i++){
        if(num%i == 0)
         return false ;
    }

    return true ;
}
 
int main(){
 
 int n ;
 cin>>n ;

 cout<<boolalpha<<checkPrime(n) ;
 
return 0 ;
}