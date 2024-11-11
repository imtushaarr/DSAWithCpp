#include <iostream>
using namespace std;

int main(){
    
    char latter;
    
    cout << "Enter Latter : ";
    cin >> latter;
    
    if(latter >= 65 && latter <96){
        cout << "latter you given is Capital Latter!" << endl;
    } else if (latter >= 97){
        cout << "latter you given is small Latter!" << endl;
    }
    
    return 0;
}
