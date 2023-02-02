#include<bits/stdc++.h>
using namespace std;

void input(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
}

void display(int arr[] , int n){
    for(int i = 0 ;i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insert(int arr[] , int n , int idx , int val){

    for(int i = n ; i>idx ; i--){
        arr[i] = arr[i-1];
    }
    arr[idx] = val;
    n++;
}

int main(){

   int n , val , idx;
   cout<<"Enter the size of the array : ";
   cin>>n;

   int arr[n];

   input(arr , n);
   display(arr , n);

   cout<<"Enter the index where the value has to be inserted : ";
   cin>>idx;
   
   cout<<"Enter the value to be inserted: ";
   cin>>val;

   insert(arr , n ,idx , val);
   display(arr , n);
   
       return 0;
}