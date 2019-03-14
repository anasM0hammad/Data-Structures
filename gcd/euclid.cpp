// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

int euclidGcd(int m , int n){
    if(m == 0 && n == 0)
     return 0 ;

    if(m == 0)
     return n;

    if(n == 0)
     return m ;

    if(m%n == 0)
     return n ;

    else
     euclidGcd(n , m%n) ;
}
 
int main(){
  int m , n ;
  cin>>m>>n ;

  cout<<euclidGcd(m , n) ;
 
 return 0 ;
}