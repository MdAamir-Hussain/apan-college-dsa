#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-i-1; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n ){

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1,2,5,6,3,9,7};
    int n = 7;

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}

