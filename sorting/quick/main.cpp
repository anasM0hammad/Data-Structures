// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;


int partition(int arr[] , int start , int end){
    int s = 0 ;
    int l = end ;
    int pivot = arr[start] ;

    while(s < l){
        while(arr[s] <= pivot){
            s++ ;
        }

        while(arr[l] > pivot){
            l-- ;
        }

        if(s<l){
            int temp = arr[s];
            arr[s] = arr[l] ;
            arr[l] = temp ;
        }
    }


    int t = arr[start] ;
    arr[start] = arr[l];
    arr[l] = t ; 
    
    return l ;
}



void quickSort(int arr[] , int start , int end){

   if(start >= end)
    return ;

    int j = partition(arr , start , end) ;

    quickSort(arr , start , j) ;
    quickSort(arr , j+1 , end) ;
}

 
int main(){

 int size ;
 cout<<"Enter size : " ;
 cin>>size ;

 int arr[size] ;
 cout<<"Enter the array : " ;
 for(int i=0 ; i<size ; i++)
  cin>>arr[i] ;

 quickSort(arr , 0 , size-1) ;

 cout<<"Sorted Array : " ;
 for(int i=0 ; i<size ; i++)
  cout<<arr[i]<<" " ; 

return 0 ;
}