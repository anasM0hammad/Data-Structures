// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

void heapify(int arr[] , int ei){
    if(ei != 1){
         int pi = (ei/2) ;
        while(pi >= 1){      
            if(arr[pi] < arr[ei]){
                int temp = arr[pi] ;
                arr[pi] = arr[ei] ;
                arr[ei] = temp ;

                ei = ei/2 ;
                pi = ei/2 ;
            }
            else
              break ;
        }
    }
}

void heapSort(int arr[] , int size){
   
   int si = 1 ;
   int ei = size ;

   while(ei > 1 ){
       si = 1 ;

       int temp = arr[ei] ;
       arr[ei] = arr[si] ;
       arr[si] = temp ;
       ei-- ;
     
       int left = 2*si ;
       int right = 2*si + 1 ;

      while(left <= ei){

       if(arr[left] > arr[right]){
           if(arr[left] > arr[si]){
               int temp = arr[si] ;
               arr[si] = arr[left] ;
               arr[left] = temp ;

               si = left ;
           }
           else
             break ;
       }
       else{
            if(arr[right] > arr[si] && right <= ei){
               int temp = arr[si] ;
               arr[si] = arr[right] ;
               arr[right] = temp ;

               si = right ;
           }
           else
             break ;
       }

       left = 2*si ;
       right = 2*si + 1 ;
     }
   }
   
}
 
int main(){
 
  int size ;
  cout<<"Enter the size : " ;
  cin>>size ;

  int heap[size] ;

  cout<<"Enter the array : " ;

  for(int i=1 ; i<=size ; i++){
     cin>>heap[i];
     heapify(heap , i) ;
  }

  heapSort(heap , size) ;

  cout<<"Sorted Array : " ;
  for(int i=1 ; i<=size; i++)
   cout<<heap[i]<<" " ;

 
return 0 ;
}