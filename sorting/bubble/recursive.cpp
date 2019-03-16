// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;
 
void bubbleSort(int arr[] , int start , int end){
  
  if(start > end)
   return ;

  if(arr[start] > arr[start+1]){
      int swap = arr[start] ;
      arr[start] = arr[start+1] ;
      arr[start+1] = swap ;
  } 

   bubbleSort(arr , start+1 , end) ;
   
}

int main(){

 int size ;
 cout<<"Enter size : " ;
 cin>>size ;

 int arr[size] ;

 cout<<"Enter array : " ;
 for(int i=0 ; i<size ; i++)
  cin>>arr[i] ;

for(int i=0 ; i<size ; i++)
 bubbleSort(arr , 0 , size-i) ; 

 cout<<"Sorted Array : " ;
 for(int i=0 ; i<size ; i++)
  cout<<arr[i]<<" " ;
 
return 0 ;
}