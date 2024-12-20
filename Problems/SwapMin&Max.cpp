// WAF to swap the max and min number of an array

#include<iostream>
using namespace std;

int maxValue(int arr[], int sz){
    int maxVal = arr[0];
    
    for(int i=1; i<sz; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        } 
    }
    
    return maxVal;
}

int minValue(int arr[], int sz){
    int minVal = arr[0];
    
    for(int i=1; i<sz; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
        } 
    }
    
    return minVal;
}

void swapValue(int arr[], int sz){
    int minInd = 0;
    int maxInd = 0;
    
    for(int i=0; i<sz; i++){
        if(arr[i] < arr[minInd]){
            minInd = i;
        }
        if(arr[i] > arr[maxInd]){
            maxInd = i;
        }
    }
    
    swap(arr[minInd], arr[maxInd]);
}

int main(){
    int arr[] = {4,8,6,2,9,1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    
    swapValue(arr, sz);
    
    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
