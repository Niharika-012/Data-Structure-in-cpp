#include<bits/stdc++.h>
using namespace std;

void read(int arr[] , int n){

    cout<<"Enter the elements: ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
}

void minMax(int arr[] , int n){

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = 0 ; i<n ; i++){
        
        if(arr[i] < mini){
            mini = arr[i];
        }
        else if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    cout<<"Maximum Element : "<<maxi<<endl;
    cout<<"Minimum Element : "<<mini<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    read(arr , n);

    minMax(arr, n);

}