/*
*
**
***
****
*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    
    for(int i=0; i<n; i++){ // column
        for(int j=0;j<=i;j++){ // row
            cout << "*";
        }
        cout<<endl;
    }
    
    return 0;
}

