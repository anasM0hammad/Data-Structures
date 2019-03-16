// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;
 
void bubbleSort(int arr[] , int size){

    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size-i ; j++){
            if(arr[j] > arr[j+1]){
                int swap = arr[j] ;
                arr[j] = arr[j+1];
                arr[j+1] = swap ;
            }
        }
    }
}

int main(){

 int size ;
 cout<<"Enter size : " ;
 cin>>size ;

 int arr[size] ;

 cout<<"Enter array : " ;
 for(int i=0 ; i<size ; i++)
  cin>>arr[i] ;

 bubbleSort(arr , size) ; 

 cout<<"Sorted Array : " ;
 for(int i=0 ; i<size ; i++)
  cout<<arr[i]<<" " ;
 
return 0 ;
}