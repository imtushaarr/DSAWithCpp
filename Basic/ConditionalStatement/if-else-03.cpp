#include <iostream>
using namespace std;

int main(){
    int value;
    
    cout<< "Enter the value : ";
    cin >> value;
    
    if(value % 2 == 0){
        cout<< value << " is Even Number"<< endl;
    } else {
        cout << value << " is Odd Number "<< endl;
    }
    
    return 0;
}
