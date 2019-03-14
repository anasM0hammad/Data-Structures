// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

bool isPalindrome(int start , int end , string str){
 
  if(start > end)
   return true ;

  if(str[start] != str[end])
    return false ;

  else
    isPalindrome(start+1 , end-1 , str) ;   

}
 
int main(){

 string str ;
 cin>>str ;

 cout<<boolalpha<<isPalindrome(0 , str.length()-1 , str) ;
 
return 0 ;
}