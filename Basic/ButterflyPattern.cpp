#include<iostream>
using namespace std;


int main(){
    int n=4;
    
    // Top part
    for(int i=0; i<n; i++){
        // star
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        // spaces
        for(int j=0; j<2*(n-i)-1; j++){ // logic for even space print
            cout<<" ";
        }
        // star
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }

    // Bottom Part
    for(int i=n-1; i>=0; i--){
        // star
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        // spaces
        for(int j=0; j<2*(n-i)-1; j++){
            cout<<" ";
        }
        // star
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}


// output

// *       *
// **     **
// ***   ***
// **** ****
// **** ****
// ***   ***
// **     **
// *       *
