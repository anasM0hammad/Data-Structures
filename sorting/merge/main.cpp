// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

void copyArr(int from[] , int si , int ei , int *to){

  while(si<=ei){
    *to = from[si] ;
    si++ ;
    to++ ;
  }
}

void merge(int arr[] , int si , int ei  , int mid){

   int temp_A[100] ;
   int temp_B[100] ;

   copyArr(arr , si , mid , temp_A) ;
   copyArr(arr , mid+1 , ei , temp_B) ;

  int size_A = mid-si+1;
  int size_B = ei-(mid+1)+1 ;

  int i = 0;  // for temp_A 
  int j = 0;  // for temp_B
  int k = si;
  
  while(i<size_A && j<size_A){
    
    if(temp_A[i] < temp_B[j]){
      arr[k] = temp_A[i] ;
      i++ ;
      k++ ;
    }
    else{
      arr[k] = temp_B[j];
      j++ ;
      k++ ;
    }

  }
 
 
    while(i<size_A){
      arr[k++] = temp_A[i++];
    }

    while(j<size_B){
      arr[k++] = temp_B[j++] ;
    }

}


void mergeSort(int arr[] , int start , int end){
   if(start >= end)
    return ;

    int mid = (start+end)/2 ;
    
    mergeSort(arr, start , mid) ;
    mergeSort(arr , mid+1 , end) ;

    merge(arr , start , end , mid) ;

}

 
int main(){

 int size ;
 cout<<"Enter Size : " ;
 cin>>size ;

 int arr[size];
 cout<<"Enter Array : " ;
 for(int i=0 ; i<size ; i++)
  cin>>arr[i] ;

 mergeSort(arr , 0 , size-1) ;

 cout<<"Sorted Array : " ;
 for(int i=0 ; i<size ; i++)
  cout<<arr[i]<<" " ; 
 
return 0 ;
}