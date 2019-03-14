// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

int findPos(int arr[] , int beg , int end , int key){
    if(beg > end)
     return -1 ;

     int mid = (beg+end)/2 ;

     if(arr[mid] == key)
      return mid ;

     else if(arr[mid] > key)
      findPos(arr , beg , mid-1 , key) ;

     else
      findPos(arr , mid+1 , end , key) ;

}
 
int main(){
 int size ;

 cout<<"Enter Size : " ;
 cin>>size ;

 int arr[size] ;

 cout<<"Enter the Elements in sorted order : ";
 for(int i=0 ; i<size ; i++)
  cin>>arr[i] ;

 int key ;
 cout<<"Enter Key : " ;
 cin>>key ;

 cout<<findPos(arr, 0 , size-1 , key) ; 
 
return 0 ;
}