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

void linearSearch(int arr[] , int n , int key){

     for(int i = 0 ; i<n ; i++){
        if(arr[i] == key)
        {  
            swap(arr[i] , arr[0]); // move to front improved linear search so that next time at constant time we can
                                   // access the same key element from the array;
            cout<<"Key is present!"<<endl;
            return;
        }
     }
     cout<<"Key is not present!"<<endl;
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
   
   linearSearch(arr , n , key);
  
   
       return 0;
}