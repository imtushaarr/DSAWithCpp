#include <iostream>
using namespace std;

int main(){
    int age;
    
    cout << "Enter your age : ";
    cin >> age;
    
    if(age < 18){
        cout<< "You are not eligible for vote!"<< endl;
    } else {
        cout << "You are eligible for vote!"<< endl;
    }
    
    return 0;
}
