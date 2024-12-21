// WAF to print all the unique value in an array.
// Visualize Code Link : https://www.codechef.com/code-visualizer/0207d253dab8c0539fbdaf25c40a09d1

#include<iostream>
using namespace std;

void uniqueVaue(int arr[], int sz){
    for(int i=0; i<sz; i++){
        bool isUnique = true;
        for(int j=0; j<sz; j++){
            if(i!=j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
    
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,1,2,3,4};
    int sz = sizeof(arr) / sizeof(arr[0]);
    
    uniqueVaue(arr, sz);
    
    return 0;
}
