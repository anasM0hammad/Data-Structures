#include<iostream>

using namespace std ;

int myGcd(int m , int n){

    if(m == 0 && n == 0)
      return 0 ;

    if(m == 0 || m == 1)
     return n ;

    if(n == 0 || n == 1)
     return m ; 

    for(int i = n ; i >= 2 ; i--){
        if(n%i == 0 && m%i == 0){
            return i ;
        }
    } 
}

int main(){
    int m , n ;
    cin>>m>>n ;

    cout<<myGcd(m , n) ;

    return 0 ;
}