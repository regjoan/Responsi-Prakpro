// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 int temp;
 void bubble_sort (int arr[], int n){
     for(int i=0; i<n; i++){
         for(int j=i; j<n; j++){
             if(arr[i]>arr[j]){
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
         }
     }
 }
 
int main() {
    cout<<"Merge Two Sorted Lists"<<endl;
    cout<<"=============="<<endl;
    int x;
    // cout<<"How many number you will type in the first list? ";
    int n_first = 2;
    
    // cout<<"How many number you will type in the second list? ";
    int n_second = 2;
    
    int arr[n_first+n_second];
    
    // cout<<"Enter the numbers in the first list : ";
    for(int i=0; i<n_first; i++){
        int arr[i]={1, 5};
        // cout<<arr[i];
    }
    
    // cout<<"Enter the numbers in the second list : ";
    for(int i=n_first; i<n_first+n_second; i++){
        int arr[i]={6, 9};
        // cout<<arr[i];
    }
    
    bubble_sort;
    
    for(int i=0; i<n_first+n_second; i++){
        int arr[i]={1, 5, 6, 9};
        // cout<<arr[i];
    }
    
    int i;
    int expectedarr[i] = {1, 5, 6, 9};
    
    if(arr[i]==expectedarr[i]){
        cout<<"Passed";
    }else{
        cout<<"Not passed";
    }
    
    return 0;
}