#include<bits/stdc++.h>
using namespace std;

void input(int arr[] , int n){
    cout<<"Enter the elements: ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
}

void display(int arr[] , int n){
    cout<<"Array : ";
    for(int i = 0 ;i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void binarySearch(int arr[] , int n , int key){
    
    int low = arr[0];
    int high = arr[n-1];

     while(low <= high ){

       int mid = low + (high - low)/2;

        if( arr[mid] == key){
            cout<<"Key is present !"<<endl;
            return;
        }
       
        if( arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
       
    }
    cout<<"Key is not present ! "<<endl;
  
}

int main(){

   int n , key;
   cout<<"Enter the size of the array : ";
   cin>>n;

   int arr[n];

   input(arr , n);
   display(arr , n);

   cout<<"Enter the key : ";
   cin>>key;
   
   binarySearch(arr , n , key);
  
   
       return 0;
}