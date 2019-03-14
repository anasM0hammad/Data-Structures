// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;
 
int main(){
 string str ;
 cin>>str ;
 int i = 0 ;
 int j = str.length()-1 ;

 while(i <= j){
     if(str[i] != str[j]){
         cout<<"Not Palindrome" ;
         break ;
     }

     i++ ;
     j-- ;
 }

 if(i > j)
  cout<<"Palindrome" ;
 
return 0 ;
}