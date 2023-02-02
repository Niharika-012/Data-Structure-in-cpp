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
            swap(arr[i] , arr[i-1]); // transposition if the key is present move it 1 step ahead  so 
                                     // that next time we can access that prsent key in less no. of comparisons
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