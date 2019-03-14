// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

void allPrimes(int n){
    bool arr[100] ;
    int primes[100] ;
    int count = 0;
    
    for(int k=0 ; k<100 ; k++)
     arr[k] = true ;
    
    for(int i=2 ; i<=n ; i++){
       
        if(arr[i]){
         for(int j=i ; j<=n ; j = j+i){
            arr[j] = false ;
         }
          primes[count++] = i ;
        }
    }

    for(int i=0 ; i<count ; i++)
      cout<<primes[i]<<" " ;

}
 
int main(){
 
 int n ;
 cin>>n ;

 allPrimes(n);
 
return 0 ;
}