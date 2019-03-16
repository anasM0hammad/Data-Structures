// WELCOME MOHAMMAD ANAS
#include<iostream>
 
using namespace std ;


int linearSearch(int arr[] , int start , int last , int key){
    for(int i=start ; i<=last ; i++){
        if(arr[i] == key)
         return i ;
    }

    return -1 ;
}

int jumpSearch(int arr[] , int key , int jump , int size){
    
    int index = jump ;
    int prevIndex = 0;

    while(index < size){

        if(arr[index] == key)
          return index ;

        else if(arr[index] < key){
            prevIndex = index ;
            index = index + jump ;
        }
        else{
            break ;
        }  
    }

    if(index > size)
     index = size ;

    return linearSearch(arr , prevIndex+1 , index-1 , key) ; 
}
 
int main(){
 int size ;
 cout<<"Enter the size of Array : " ;
 cin>>size ;

 int arr[size] ;
 cout<<"Enter the sorted array : " ;

 for(int i=0; i<size ; i++)
  cin>>arr[i] ;

int key ;
cout<<"Enter key : " ;
cin>>key ;

int jump ;
cout<<"Enter jump size : " ;
cin>>jump ;

cout<<jumpSearch(arr , key , jump , size) ;

 
return 0 ;
}