WAF to calculate sum and product of an array.

#include<iostream>
using namespace std;

int sumOfArray(int arr[], int sz){
    int sum = 0;
    
    for(int i=0; i<sz; i++){
        sum += arr[i];
    }
    
    return sum;
}

int productOfArray(int arr[], int sz){
    int product = 1;
    
    for(int i=0; i<sz; i++){
        product *= arr[i];
    }
    
    return product;
}

int main(){
    int arr[] = {4,6,9,2,3,7,1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    
    int sum = sumOfArray(arr, sz);
    int product = productOfArray(arr, sz);
    
    cout << "Sum of Array is : " << sum << "\n" << "Product of array is : " << product << endl;
    
    return 0;
}
