#include<iostream>
using namespace std;

int main(){
    int n = 4;
    char ch = 'A'; // 65
    
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout << ch;
            ch = ch;
            ch++;
        }
        
        
        cout<<endl;
    }
    
    return 0;
}


// ABCD
// EFGF
// IJKL
// MNOP
