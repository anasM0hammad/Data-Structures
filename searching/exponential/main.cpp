// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

int binarySearch(int arr[] , int beg , int end , int key){
    if(beg > end)
     return -1 ;

     int mid = (beg+end)/2 ;

     if(arr[mid] == key)
      return mid ;

     else if(arr[mid] > key)
      binarySearch(arr , beg , mid-1 , key) ;

     else
      binarySearch(arr , mid+1 , end , key) ;

}



int expSearch(int arr[] , int size , int key){
    int prevIndex = 1 ;
    int index = 2 ;

    if(arr[1] == key)
     return 1 ;

    while(index <= size){
        if(arr[index] < key){
            prevIndex = index ;
            index = 2*index ;
        }

        else if(arr[index] > key){
            break ;
        }

        else{
            return index ;
        }
    }

    if(index > size)
     index = size ;

    return binarySearch(arr , prevIndex+1 , index-1 , key) ;
    
}
 
int main(){
 
 int size ;
 cout<<"Enter size of array : " ;
 cin>>size ;

 int arr[size] ;

 cout<<"Enter Sorted Array : " ;
 for(int i=1 ; i<=size ; i++)
  cin>>arr[i]; 

 int key ;
 cout<<"Enter the key : ";
 cin>>key ;

 cout<<expSearch(arr , size , key) ; 
 
return 0 ;
}