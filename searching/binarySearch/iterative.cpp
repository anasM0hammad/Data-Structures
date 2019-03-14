// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

int findPos(int arr[] , int key , int size){
    int pos = -1 ;
    int beg = 0 ;
    int end = size-1 ;

    while(beg < end){
        int mid = (beg+end)/2 ;

        if(arr[mid] == key)
            return mid ;

        else if(arr[mid] > key)
           end = mid-1 ;

        else
          beg = mid+1 ;       

    }

    return pos ;

}
 
int main(){

 int size ;
 cout<<"Enter the size of array : " ;
 cin>>size ;

 int arr[size] ;

 cout<<"Enter Element in sorted order : " ;
 for(int i=0 ; i<size ; i++)
  cin>>arr[i] ;

 int key ;
 cout<<"Enter Key : " ;
 cin>>key ;

 cout<<findPos(arr , key , size) ; 
 
return 0 ;
}