// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;

void selectionSort(int arr[] , int size){
    int curIndex = 0;

    for(int i=0 ; i<size; i++){
        int min = 100000 ;
        for(int j=i ; j<size ; j++){
            if(arr[j] < min){
                min = arr[j];
                curIndex = j ;
            }
        }

        int swap = arr[curIndex] ;
        arr[curIndex] = arr[i] ;
        arr[i] = swap ;
    }
}
 
int main(){
 
 int size ;

 cout<<"Enter size : ";
 cin>>size ;

 int arr[size] ;

 cout<<"Enter array : " ;
 for(int i=0 ; i<size ; i++)
  cin>>arr[i] ;
 
selectionSort(arr , size) ;

cout<<"Array after sort : " ;
for(int i=0 ; i<size ; i++)
 cout<<arr[i]<<" " ;

return 0 ;
}